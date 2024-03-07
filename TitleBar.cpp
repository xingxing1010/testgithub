#include "TitleBar.h"
#include<QHBoxLayout>
#include<QFile>
#include<QPainter>
#include<QPainterPath>
#include<QMouseEvent>
#define BUTTON_HEIGHT 27
#define BUTTON_WIDTH 27
#define TITLE_HEIGHT 27

TitleBar::TitleBar(QWidget* parent)
	: QWidget(parent)
	, m_isPressed(false)
	, m_buttonType(MIN_MAX_BUTTON)

{

	initControl();
	initConnections();
	loadStyleSheet("Title");

}

TitleBar::~TitleBar()
{

}

void TitleBar::setTitleIcon(QString& filePath)
{
	QPixmap titlePath(filePath);
	m_pIcon->setFixedSize(titlePath.size());
	m_pIcon->setPixmap(titlePath);
}

void TitleBar::setTitleContent(QString& titlePath)
{
	m_pTitleContent->setText(titlePath);
	m_titleContent = titlePath;
}

void TitleBar::setTitleWidth(int width)
{
	setFixedWidth(width);
}

void TitleBar::setButtonType(ButtonType buttonType)
{
	m_buttonType = buttonType;
	switch (buttonType)
	{
	case MIN_BUTTON:
		m_pButtonRestore->setVisible(false);
		m_pButtonMax->setVisible(false);
		break;
	case MIN_MAX_BUTTON:
		m_pButtonRestore->setVisible(false);
		break;
	case ONLY_CLOSE_BUTTON:
		m_pButtonRestore->setVisible(false);
		m_pButtonMax->setVisible(false);
		m_pButtonMin->setVisible(false);
		break;
	default:
		break;
	}
}

void TitleBar::saveRestoreInfo(const QPoint& point, const QSize& size)
{
	m_restorePos = point;
	m_restoreSize = size;
}

void TitleBar::getRestoreInfo(QPoint& point, QSize& size)
{
	point = m_restorePos;
	size = m_restoreSize;
}

void TitleBar::paintEvent(QPaintEvent* event)
{
	//设置背景色
	QPainter pter(this);
	QPainterPath pathBack;
	pathBack.setFillRule(Qt::WindingFill);
	pathBack.addRoundedRect(QRect(0, 0, width(), height()), 3, 3);
	pter.setRenderHint(QPainter::SmoothPixmapTransform, true);

	if (width() != parentWidget()->width())
	{
		setFixedWidth(parentWidget()->width());
    }
	QWidget::paintEvent(event);
}

void TitleBar::mouseDoubleClickedEvent(QMouseEvent* event)
{
	if (m_buttonType == MIN_MAX_BUTTON)
	{
		if (m_pButtonMax->isVisible()) {
			onButtonMaxClicked();
		}
		else {
			onButtonRestoreClicked();
		}
	}
	return QWidget::mouseDoubleClickEvent(event);
}

void TitleBar::mousePressEvent(QMouseEvent* event)
{
	if (m_buttonType == MIN_MAX_BUTTON)
	{
		//窗口最大华禁止拖动窗口
		if (m_pButtonMax->isVisible()) {
			m_isPressed = true;
			m_startMovePos = event->globalPos();//返回事件发生时鼠标的全局位置
		}
	}
	else {
		m_isPressed = true;
		m_startMovePos = event->globalPos();
	}
	return QWidget::mousePressEvent(event);
}

void TitleBar::mouseMoveEvent(QMouseEvent* event)
{
	if (m_isPressed)
	{
		QPoint movePoint = event->globalPos()-m_startMovePos;
		QPoint widgetPos = parentWidget()->pos();
		m_startMovePos = event->globalPos();
		parentWidget()->move(widgetPos.x() + movePoint.x(), widgetPos.y() + movePoint.y());
	}
	return QWidget::mouseMoveEvent(event);
}

void TitleBar::mouseReleaseEvent(QMouseEvent* event)
{
	m_isPressed = false;
	return QWidget::mouseReleaseEvent(event);
}

void TitleBar::initControl()
{
	m_pIcon = new QLabel(this);
	m_pTitleContent = new QLabel(this);

	m_pButtonMin = new QPushButton(this);
	m_pButtonRestore = new QPushButton(this);
	m_pButtonMax= new QPushButton(this);
	m_pButtonClose= new QPushButton(this);

	m_pButtonMin->setFixedSize(QSize(BUTTON_WIDTH, BUTTON_HEIGHT));
	m_pButtonRestore->setFixedSize(QSize(BUTTON_WIDTH, BUTTON_HEIGHT));
	m_pButtonMax->setFixedSize(QSize(BUTTON_WIDTH, BUTTON_HEIGHT));
	m_pButtonClose->setFixedSize(QSize(BUTTON_WIDTH, BUTTON_HEIGHT));

	m_pTitleContent->setObjectName("TitleContent");
	m_pButtonMin->setObjectName("ButtonMin");
	m_pButtonRestore->setObjectName("ButtonRestore");
	m_pButtonMax->setObjectName("ButtonMax");
	m_pButtonClose->setObjectName("ButtonClose");
	//设置布局
	QHBoxLayout* mylayout = new QHBoxLayout(this);
	mylayout->addWidget(m_pIcon);
	mylayout->addWidget(m_pTitleContent);

	mylayout->addWidget(m_pButtonMin);
	mylayout->addWidget(m_pButtonRestore);
	mylayout->addWidget(m_pButtonMax);
	mylayout->addWidget(m_pButtonClose);

	mylayout->setContentsMargins(5, 0, 0, 0);//设置布局的间隙
	mylayout->setSpacing(0);

	m_pTitleContent->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
	setFixedHeight(TITLE_HEIGHT);
	setWindowFlags(Qt::FramelessWindowHint);
}

void TitleBar::initConnections()
{
	connect(m_pButtonMin, SIGNAL(clicked()), this, SLOT(onButtonMinClicked()));
	connect(m_pButtonMax, SIGNAL(clicked()), this, SLOT(onButtonMaxClicked()));
	connect(m_pButtonRestore, SIGNAL(clicked()), this, SLOT(onButtonRestoreClicked()));
	connect(m_pButtonClose, SIGNAL(clicked()), this, SLOT(onButtonCloseClicked()));
	
}

void TitleBar::loadStyleSheet(const QString& sheetName)
{
	QFile file(":/Resources/QSS/" + sheetName + ".css");
	file.open(QFile::ReadOnly);
	if (file.isOpen())
	{
		QString styleSheet = this->styleSheet();
		styleSheet += QLatin1String(file.readAll());
		setStyleSheet(styleSheet);
	}
}

void TitleBar::onButtonMinClicked()
{
	emit signalButtonMinClicked();

}
void TitleBar::onButtonRestoreClicked()
{
	m_pButtonRestore->setVisible(false);
	m_pButtonMax->setVisible(true);
	emit signalButtonRestoreClicked();
}

void TitleBar::onButtonCloseClicked()
{
	emit signalButtonCloseClicked();
}

void TitleBar::onButtonMaxClicked()
{
	m_pButtonRestore->setVisible(true);
	m_pButtonMax->setVisible(false);
	emit signalButtonMaxClicked();
}

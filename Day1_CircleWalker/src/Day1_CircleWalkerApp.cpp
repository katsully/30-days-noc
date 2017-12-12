#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "Walker.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class WalkerApp : public App {
public:
    void setup() override;
    void prepareSettings( Settings *settings );
    void mouseDown( MouseEvent event ) override;
    void update() override;
    void draw() override;
    
    Walker *mWalker;
};

void WalkerApp::prepareSettings( Settings *settings )
{
    settings->setWindowSize(640, 360);
    gl::clear( Color( 0, 0, 0 ) );
    
}

void WalkerApp::setup()
{
    
    mWalker = new Walker();
}

void WalkerApp::mouseDown( MouseEvent event )
{
}

void WalkerApp::update()
{
    mWalker->step();
}

void WalkerApp::draw()
{
    mWalker->display();
    
}

CINDER_APP( WalkerApp, RendererGl )

#include "GraphicsGameState.h"
#include "CameraController.h"
#include "GraphicsSystem.h"

#include "OgreSceneManager.h"
#include "OgreItem.h"

#include "OgreMeshManager.h"
#include "OgreMeshManager2.h"
#include "OgreMesh2.h"

#include "OgreCamera.h"
#include "OgreWindow.h"

#include "OgreHlmsPbsDatablock.h"
#include "OgreHlmsSamplerblock.h"

#include "OgreRoot.h"
#include "OgreHlmsManager.h"
#include "OgreHlmsPbs.h"

using namespace Xyz;

namespace Xyz
{
    GraphicsGameState::GraphicsGameState(const Ogre::String &helpDescription) :
        BaseGameState(helpDescription),
        mSceneNode(nullptr),
        mDisplacement(0)
    {
    }
    //-----------------------------------------------------------------------------------
    void GraphicsGameState::createScene01(void)
    {
        mCameraController = new CameraController(mGraphicsSystem, false);

        auto sceneManager = mGraphicsSystem->getSceneManager();

        // �򳡾����һ��������(Cube_d.mesh�Ѿ�λ��DebugPack.zip����)
        auto item = sceneManager->createItem("Cube_d.mesh");
        mSceneNode = sceneManager->getRootSceneNode()->createChildSceneNode();
        mSceneNode->attachObject(item);


        BaseGameState::createScene01();
    }

    //-----------------------------------------------------------------------------------
    void GraphicsGameState::update(float timeSinceLast)
    {
        BaseGameState::update(timeSinceLast);
    }

    //-----------------------------------------------------------------------------------
    void GraphicsGameState::generateDebugText(float timeSinceLast, Ogre::String &outText)
    {
        BaseGameState::generateDebugText(timeSinceLast, outText);
    }

    //-----------------------------------------------------------------------------------
    void GraphicsGameState::keyReleased(const SDL_KeyboardEvent &arg)
    {
        if ((arg.keysym.mod & ~(KMOD_NUM | KMOD_CAPS)) != 0) {
            BaseGameState::keyReleased(arg);
            return;
        }

        BaseGameState::keyReleased(arg);
    }
}


#include "Threading/MessageQueueSystem.h"

namespace Xyz
{
namespace Mq
{
    const size_t MessageQueueSystem::cSizeOfHeader = Ogre::alignToNextMultiple(
                                                        sizeof(Ogre::uint32) * 2,
                                                        sizeof(size_t) );
}
}

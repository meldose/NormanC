
module ObjectMessages {

    struct NewBoxObjectMsg {
        sequence<double, 3> position;
        sequence<double, 4> quaternion;
        sequence<octet, 16> uuid;
        sequence<double, 3> dimensions;
        };

    struct KnownObjectPoseMsg {
        sequence<octet, 16> uuid;
        sequence<double, 3> position;
        sequence<double, 4> quaternion;
    };

    module PickingState {
        const uint64 UNKNOWN = 0;
        const uint64 UNAVAILABLE = 1;
        const uint64 MOVING = 10;
        const uint64 REACHED = 20;
        const uint64 PICKED = 30;
        const uint64 PICK_FAILED = 40;
    };

    module PlacingState {
        const uint64 UNKNOWN = 0;
        const uint64 UNAVAILABLE = 1;
        const uint64 OBJECT_ID_UNKNOWN = 2;
        const uint64 MOVING = 10;
        const uint64 REACHED = 20;
        const uint64 RELEASED = 30;
        const uint64 RELEASE_FAILED = 40;
    };    
};

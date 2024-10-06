enum AnimationSnapshotType_t : uint32_t
{
	ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0,
	ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 1,
	ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 2,
	ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 3,
	ANIMATION_SNAPSHOT_CLIENT_RENDER = 4,
	ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 5,
	ANIMATION_SNAPSHOT_MAX = 6,
};
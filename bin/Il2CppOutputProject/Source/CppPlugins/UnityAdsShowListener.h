#import "UnityAds/UnityAds.h"

typedef void (*ShowFailureCallback)(void *showlistener, const char *placementId, int error, const char *message);
typedef void (*ShowStartCallback)(void *showListener, const char *placementId);
typedef void (*ShowClickCallback)(void *showListener, const char *placementId);
typedef void (*ShowCompleteCallback)(void *showListener, const char *placementId, int completionState);

@interface UnityAdsShowListener : NSObject <UnityAdsShowDelegate>
@property (assign) ShowFailureCallback showFailureCallback;
@property (assign) ShowStartCallback showStartCallback;
@property (assign) ShowClickCallback showClickCallback;
@property (assign) ShowCompleteCallback showCompleteCallback;

- (id)initWithFailureCallback:(ShowFailureCallback)showFailureCallback startCallback:(ShowStartCallback)showStartCallback clickCallback:(ShowClickCallback)showClickCallback completeCallback:(ShowCompleteCallback)showCompleteCallback;
@end

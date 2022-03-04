#import "UnityAds/UnityAds.h"

typedef void (*LoadSuccessCallback)(void *loadListener, const char *placementId);
typedef void (*LoadFailureCallback)(void *loadListener, const char *placementId, int error, const char *message);

@interface UnityAdsLoadListener : NSObject <UnityAdsLoadDelegate>
@property (assign) LoadSuccessCallback loadSuccessCallback;
@property (assign) LoadFailureCallback loadFailureCallback;
- (id)initWithSuccessCallback:(LoadSuccessCallback)loadSuccessCallback failCallback:(LoadFailureCallback)loadFailureCallback;
@end

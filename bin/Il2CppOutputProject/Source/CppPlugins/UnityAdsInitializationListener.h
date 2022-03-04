#import "UnityAds/UnityAds.h"

typedef void (*InitSuccessCallback)(void *initListener);
typedef void (*InitFailCallback)(void *initListener, int error, const char *message);

@interface UnityAdsInitializationListener : NSObject <UnityAdsInitializationDelegate>
@property (assign) InitSuccessCallback initSuccessCallback;
@property (assign) InitFailCallback initFailCallback;
- (id)initWithSuccessCallback:(InitSuccessCallback)initSuccessCallback failCallback:(InitFailCallback)initFailCallback;
@end

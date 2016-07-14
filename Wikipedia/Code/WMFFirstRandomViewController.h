#import <UIKit/UIKit.h>

@class MWKSite, MWKDataStore;

//This VC is a placeholder to load the first random article

@interface WMFFirstRandomViewController: UIViewController

- (nonnull instancetype)initWithSite:(nonnull MWKSite*)site dataStore:(nonnull MWKDataStore*)dataStore NS_DESIGNATED_INITIALIZER;

@end

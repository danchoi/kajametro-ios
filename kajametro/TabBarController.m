#import "TabBarController.h"

@implementation TabBarController
- (void)viewDidLoad {
  [self setTabURLs:[NSArray arrayWithObjects:@"tt://first",
                                             @"tt://second",
                                             nil]];
}
@end

#import <UIKit/UIKit.h>

@interface AnalyticsViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIPageControl * pageControl;
@property (nonatomic) CFAnalyticsTimeframe currentTimeframe;
@property (nonatomic) CFDNSAnalyticsTimeframe dnsTimeframe;

- (void) setDataObservationsWithRecievedData:(OCSelector *)recievedData loadStarted:(OCSelector *)loadData;

@end

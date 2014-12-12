//
//  ARBWalletDashboardView.h
//  Unity-iPhone
//
//  Created by Andy Zinsser on 9/3/14.
//
//

#import <UIKit/UIKit.h>
#import "ARBPanelView.h"
#import "ARBWalletDetailView.h"
#import "ARBWalletDepositView.h"

@interface ARBWalletDashboardView : ARBPanelView <WalletDetailViewDelegate, WalletDepositViewDelegate, ARBWalletObserver>

@property (strong) UIView *activeView;
@property (strong) id <ARBWalletObserver> activeWalletObserver;
@property (strong) void (^callback)(void);

- (void)segmentControlClicked:(UISegmentedControl *)segment;
- (void)onWalletUpdated:(NSDictionary *)wallet;

@end

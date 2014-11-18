//
//  KNSFDigitalIOTableViewCell.h
//  KonashiInspector
//
//  Created by Akira Matsuda on 11/19/14.
//  Copyright (c) 2014 Akira Matsuda. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *const KNSFDigitalPinValueChangedNotification = @"KNSFDigitalPinValueChangedNotification";

@interface KNSFDigitalIOTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *pinNumberLabel;
@property (weak, nonatomic) IBOutlet UISegmentedControl *outputSegmentedControl;
@property (weak, nonatomic) IBOutlet UIButton *toggleButton;
@property (weak, nonatomic) IBOutlet UISwitch *pinModeSwitch;

@end

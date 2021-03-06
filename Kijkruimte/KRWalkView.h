//
//  KRWalkView.h
//  Kijkruimte
//
//  Created by James Bryan Graves on 09-03-14.
//  Copyright (c) 2014 Hipstart. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KRWalkView : UIView

@property(nonatomic, weak)IBOutlet UIImageView *imageView;
@property(nonatomic, weak)IBOutlet UILabel *titleLabel;
@property(nonatomic, weak)IBOutlet UIButton *button;
@property(nonatomic, weak)IBOutlet UITextView *textView;
@property(nonatomic, weak)IBOutlet UILabel *distanceLabel;

@end

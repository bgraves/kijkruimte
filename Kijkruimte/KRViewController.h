//
//  KRViewController.h
//  Kijkruimte
//
//  Created by James Bryan Graves on 10/24/12.
//  Copyright (c) 2012 Hipstart. All rights reserved.
//


#import <MapKit/MapKit.h>
#import <UIKit/UIKit.h>
#import "KRMessageView.h"
#import "KRTrack.h"
#import "KRWalk.h"

@interface KRViewController : UIViewController <
CLLocationManagerDelegate,
MKMapViewDelegate,
KRMessageViewDelegate,
KRTrackDelegate> {
    
    NSMutableDictionary *_tracks;

    IBOutlet UIActivityIndicatorView *_actView;
    IBOutlet UIView *_controls;
    IBOutlet UIButton *_button;
	IBOutlet UIButton *_doneButton;
    IBOutlet KRMessageView *_messageView;
    IBOutlet UILabel *_messageLabel;
	IBOutlet UIButton *_info;
    
    NSInteger _loadCount;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;

    BOOL _isRunning;
    NSString *_guid;
	BOOL _canRetry;
    
    NSTimer *_timer;

}

@property(nonatomic, strong)NSMutableArray *bleTracks;
@property(nonatomic, strong)KRWalk *walk;
@property(nonatomic, strong)KRTrack *background;
@property(nonatomic, strong)KRMapPin *userPin;
@property(nonatomic, strong)IBOutlet MKMapView *mapView;

-(IBAction)start;
-(IBAction)toInfo:(id)sender;

@end

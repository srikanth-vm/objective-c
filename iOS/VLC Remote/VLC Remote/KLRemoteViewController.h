//
//  KLRemoteViewController.h
//  VLC Remote
//
//  Created by Srikanth VM on 29/03/14.
//  Copyright (c) 2014 Kantu Labs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KLWebClient.h"

@interface KLRemoteViewController : UIViewController

@property (strong, nonatomic) KLWebClient *webClient;
@property (strong, nonatomic) IBOutlet UIImageView *artWork;
@property (strong, nonatomic) IBOutlet UIButton *playPause;
@property (strong, nonatomic) IBOutlet UIProgressView *trackProgressBar;

- (IBAction)browseFolderAction:(UIButton *)sender;
- (IBAction)remoteButtonTouched:(UIButton *)sender;
- (IBAction)volumeControl:(UISlider *)sender;

@end
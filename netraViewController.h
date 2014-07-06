//
//  netraViewController.h
//  radiodawa
//
//  Created by Arie on 7/18/13.
//  Copyright (c) 2013 netra. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AVAudioPlayer;
@class AVPlayerItem;
#import "GADBannerView.h"
#import <iAd/iAd.h>
GADBannerView *bannerView_;
@interface netraViewController : UIViewController<ADBannerViewDelegate>
{
	UIButton   *button;
	UIButton   *twitter;
	UIButton   *facebook;
	UIView     *volumeSlider;
	UILabel *title;
	NSString            *currentImageName;
    Boolean             _playing;
    
    AVPlayerItem        *theItem;
    AVAudioPlayer       *theAudio;
    NSURL               *url;
	UIImageView *artwork;
}
- (void)showInfo:(id)sender;
- (void)playPause:(id)sender;
@property (nonatomic, strong) ADBannerView *bannerView_iad;
@property (nonatomic, retain) AVAudioPlayer	*theAudio;
@property (nonatomic, retain) AVPlayerItem	*theItem;
@property (nonatomic, retain) NSURL         *url;
@end

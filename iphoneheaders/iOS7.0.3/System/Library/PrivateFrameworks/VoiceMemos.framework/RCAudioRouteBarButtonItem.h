/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>

@class UIView, UIButton, UIColor;

@interface RCAudioRouteBarButtonItem : UIBarButtonItem {

	UIView* _contentView;
	UIButton* _button;
	UIColor* _toggleSpeakerSpeakerRouteChosenColor;
	UIColor* _toggleSpeakerOtherRouteChosenColor;

}
+(id)newAudioRouteItem;
-(void)dealloc;
-(void)_updateButton;
-(id)initAudioRouteItem;
-(void)_audioRouteControllerAvailableRoutesMaskDidChangeNotification:(id)arg1 ;
-(void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1 ;
-(void)_showAvailableRoutesAction;
-(void)_toggleSpeakerAction;
-(void).cxx_destruct;
@end

/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface RouteNotAvailableView : UIView {

	int _mode;
	UILabel* _messageLabel;

}

@property (assign,nonatomic) int mode;              //@synthesize mode=_mode - In the implementation block
-(void)layoutToFitSize:(CGSize)arg1 ;
-(id)_messageLabel;
-(void)_updateLabelText;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
@end

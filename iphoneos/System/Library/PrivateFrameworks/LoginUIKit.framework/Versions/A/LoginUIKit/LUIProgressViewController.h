/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <LoginUIKit/LUIViewController.h>

@class LUIProgressIndicator;

@interface LUIProgressViewController : LUIViewController {

	LUIProgressIndicator* _progressIndicator;
	char _usesExtendedPosition;

}
+(id)identifier;
+(id)controllerWithStyle:(int)arg1 ;
-(void)startProgressIndicator;
-(void)stopProgressIndicator;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 ;
-(void)_layoutContentView;
-(void)_setupContentView;
-(CGRect)progressRect;
-(void)setUsesExtendedPosition:(char)arg1 ;
-(void)refresh;
@end


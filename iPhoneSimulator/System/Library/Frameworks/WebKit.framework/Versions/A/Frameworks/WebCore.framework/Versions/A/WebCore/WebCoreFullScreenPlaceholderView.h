/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:08 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <AppKit/NSView.h>

@class NSObject;

@interface WebCoreFullScreenPlaceholderView : NSView {

	RetainPtr<NSView>* _exitWarning;
	NSObject* _target;
	SEL _action;

}

@property (retain) id contents; 
@property (assign) NSObject * target;              //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                     //@synthesize action=_action - In the implementation block
-(void)setExitWarningVisible:(char)arg1 ;
-(void)setContents:(id)arg1 ;
-(id)contents;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTarget:(NSObject *)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(NSObject *)target;
-(SEL)action;
-(void)mouseDown:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSView, CALayer, NSResponder, NSDictionary;


@protocol QLDisplayable <NSObject>
@property (readonly) NSView * quickLookView; 
@property (readonly) CALayer * quickLookLayer; 
@property (assign) CGRect quickLookFrame; 
@property (readonly) NSResponder * responder; 
@property (readonly) CGRect borderFrame; 
@property (readonly) NSDictionary * sizingConstraints; 
@property (readonly) id accessibilityFocusedUIElement; 
@property (assign) int inputFocusType; 
@optional
+(char)generateThumbnail:(QLThumbnailRequestRef)arg1 withData:(id)arg2 contentTypeUTI:(id)arg3 previewProperties:(id)arg4 properties:(id)arg5;
+(char)generateThumbnail:(QLThumbnailRequestRef)arg1 withURL:(id)arg2 contentTypeUTI:(id)arg3 previewProperties:(id)arg4 properties:(id)arg5;
-(NSDictionary *)sizingConstraints;
-(void)willOpen;
-(void)didOpen;
-(void)didShow;
-(void)willHide;
-(int)inputFocusType;
-(void)giveInputFocus;
-(void)refreshSynchronously;
-(CGRect)borderFrame;
-(NSResponder *)responder;
-(void)setInputFocusType:(int)arg1;
-(id)accessibilityFocusedUIElement;
-(void)setMode:(int)arg1;
-(void)willShow;
-(void)didHide;

@required
-(CALayer *)quickLookLayer;
-(NSView *)quickLookView;
-(CGRect)quickLookFrame;
-(void)setQuickLookFrame:(CGRect)arg1;

@end


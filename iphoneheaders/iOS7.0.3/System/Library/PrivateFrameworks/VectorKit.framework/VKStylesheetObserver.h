/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VKStylesheetObserver <NSObject>
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
@optional
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(int)arg1 withReadinessBlock:(/*^block*/ id)arg2;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)stylesheetDoneChanging;

@required
+(BOOL)reloadOnStylesheetChange;
-(id)stylesheet;
@end

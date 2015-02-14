/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKAssetEpub.bundle/Contents/MacOS/BKAssetEpub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKAssetEpubViewEventHandler
@property (assign,nonatomic,__weak) id<BKAssetEpubViewEventProcessor> viewEventProcessor; 
@property (assign,nonatomic) unsigned long long forwardedEvents; 
@property (assign,nonatomic) long long forwardedScrollWheelEventAxes; 
@optional
-(unsigned long long)forwardedEvents;
-(void)setForwardedScrollWheelEventAxes:(long long)arg1;
-(void)setForwardedEvents:(unsigned long long)arg1;
-(long long)forwardedScrollWheelEventAxes;

@required
-(id<BKAssetEpubViewEventProcessor>)viewEventProcessor;
-(void)setViewEventProcessor:(id)arg1;

@end


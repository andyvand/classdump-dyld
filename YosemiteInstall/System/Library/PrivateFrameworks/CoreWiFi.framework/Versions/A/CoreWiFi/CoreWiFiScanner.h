/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/Versions/A/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CoreWiFiScanner : NSObject {

	NSMutableArray* channelsOfInterest;
	NSMutableArray* ssidsOfInterest;

}

@property (nonatomic,retain) NSMutableArray * channelsOfInterest; 
@property (nonatomic,retain) NSMutableArray * ssidsOfInterest; 
-(NSMutableArray *)ssidsOfInterest;
-(void)setSsidsOfInterest:(NSMutableArray *)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(NSMutableArray *)channelsOfInterest;
-(void)setChannelsOfInterest:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)description;
@end


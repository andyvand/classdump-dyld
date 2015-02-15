/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface WBSHistorySession : NSObject {

	NSDate* _startDate;

}

@property (nonatomic,readonly) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) char isCurrentSession; 
+(id)currentSession;
-(char)isCurrentSession;
-(id)initWithSessionStartDate:(id)arg1 ;
-(NSDate *)startDate;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end


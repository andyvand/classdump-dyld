/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:51:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, DuetLST;

@interface DuetLSTDBlogger : NSObject {

	NSObject<OS_dispatch_queue>* DBLoggerTimerQueue;
	NSObject<OS_dispatch_source>* DBLoggerTimer;
	DuetLST* lst;

}

@property (nonatomic,retain) DuetLST * lst; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)generateCrashReport;
-(void)checkTimeToUpload;
-(void).cxx_destruct;
@end

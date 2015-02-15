/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface ICCommand : NSObject {

	NSNumber* _transactionID;
	NSString* _type;
	NSMutableDictionary* _dict;
	id _delegate;
	double _timeSent;
	double _timeCompleted;

}

@property (retain) NSNumber * transactionID;                //@synthesize transactionID=_transactionID - In the implementation block
@property (copy) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (retain) id delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign) double timeSent;                         //@synthesize timeSent=_timeSent - In the implementation block
@property (assign) double timeCompleted;                    //@synthesize timeCompleted=_timeCompleted - In the implementation block
-(void)setTransactionID:(NSNumber *)arg1 ;
-(void)setTimeSent:(double)arg1 ;
-(double)timeCompleted;
-(void)setTimeCompleted:(double)arg1 ;
-(NSMutableDictionary *)dict;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(double)timeSent;
-(NSNumber *)transactionID;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)delegate;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end


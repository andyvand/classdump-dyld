/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFIMAPCopyMessagesOperation.h>

@class NSMutableArray, NSPointerArray;

@interface MFIMAPOfflineCopyOnStupidServerOperation : MFIMAPCopyMessagesOperation {

	NSMutableArray* _messageIds;
	NSPointerArray* _internalDates;

}

@property (nonatomic,retain) NSMutableArray * messageIds;                 //@synthesize messageIds=_messageIds - In the implementation block
@property (nonatomic,retain) NSPointerArray * internalDates;              //@synthesize internalDates=_internalDates - In the implementation block
-(void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(unsigned char)_magic;
-(void)serializeIntoData:(id)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(char)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
-(NSMutableArray *)messageIds;
-(NSPointerArray *)internalDates;
-(void)setMessageIds:(NSMutableArray *)arg1 ;
-(void)setInternalDates:(NSPointerArray *)arg1 ;
-(unsigned long long)approximateSize;
@end


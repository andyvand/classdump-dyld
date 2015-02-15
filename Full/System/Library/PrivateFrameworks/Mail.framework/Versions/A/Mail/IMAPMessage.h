/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMAPMessage <NSObject>
@required
-(unsigned long long)messageSize;
-(id)dateReceived;
-(void)setIsPartial:(char)arg1;
-(void)setPartsHaveBeenCached:(char)arg1;
-(char)isPartial;
-(id)messageID;
-(char)partsHaveBeenCached;
-(id)mailboxName;
-(char)hasTemporaryUid;
-(/*function pointer*/void**)remoteFlags;
-(void)setHasTemporaryUid:(char)arg1;
-(id)subject;
-(unsigned)uid;
-(void)setUid:(unsigned)arg1;

@end


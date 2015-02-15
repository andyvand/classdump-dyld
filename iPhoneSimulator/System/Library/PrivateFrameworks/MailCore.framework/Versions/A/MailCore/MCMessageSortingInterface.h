/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCMessageSortingInterface <NSObject>
@required
-(unsigned)messageFlags;
-(unsigned long long)messageSize;
-(id)to;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(double)dateLastViewedAsTimeIntervalSince1970;
-(int)colorForSort;
-(id)senderDisplayName;
-(unsigned long long)numberOfAttachments;
-(unsigned long long)subjectPrefixLength;
-(unsigned)uidForSort;
-(id)subject;
-(id)mailbox;

@end


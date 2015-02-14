/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MCMessageSortingInterface.h>

@class NSString;

@interface MFMessageSortingValue : NSObject <MCMessageSortingInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newSortOrderDictionary;
+(id)_automaticSecondarySortForPrimarySort:(id)arg1 ;
+(id)equivalentSortsForSort:(id)arg1 ;
+(void)addSortData:(id)arg1 forMessages:(id)arg2 sortOrder:(id)arg3 withDelegate:(id)arg4 ;
+(id)copySortDataForMessages:(id)arg1 sortOrders:(id)arg2 includeDataForAutomaticSecondarySort:(char)arg3 withDelegate:(id)arg4 ;
+(id)mutableCopyOfSortData:(id)arg1 ;
+(void)removeMessage:(id)arg1 fromSortData:(id)arg2 ;
+(void)addMessage:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3 ;
+(void)addMessages:(id)arg1 toSortData:(id)arg2 withDelegate:(id)arg3 ;
+(void)removeEverythingExceptMessages:(id)arg1 fromSortData:(id)arg2 ;
-(unsigned)messageFlags;
-(unsigned long long)messageSize;
-(long long)libraryID;
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


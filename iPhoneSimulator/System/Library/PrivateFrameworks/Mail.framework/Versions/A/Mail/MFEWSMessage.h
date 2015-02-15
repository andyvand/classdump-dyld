/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCRemoteMessage.h>

@class NSString, NSData, MCMessageHeaders;

@interface MFEWSMessage : MCRemoteMessage {

	NSString* _itemId;
	NSString* _changeKey;
	NSData* _bodyData;
	NSData* _headerData;
	MCMessageHeaders* _headers;
	long long _libraryID;

}

@property (nonatomic,copy) NSString * itemId;                  //@synthesize itemId=_itemId - In the implementation block
@property (nonatomic,copy) NSString * changeKey;               //@synthesize changeKey=_changeKey - In the implementation block
@property (retain) NSData * fetchedBodyData;                   //@synthesize bodyData=_bodyData - In the implementation block
@property (retain) NSData * headerData;                        //@synthesize headerData=_headerData - In the implementation block
@property (retain) MCMessageHeaders * headers;                 //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) long long libraryID;              //@synthesize libraryID=_libraryID - In the implementation block
+(id)EWSFolderClassForMailboxType:(int)arg1 ;
+(id)validEWSItemIdTypesForItemIdTypes:(id)arg1 ;
+(id)EWSItemIdTypesForItemIdStrings:(id)arg1 ;
+(id)EWSItemIdStringsForItemIdTypes:(id)arg1 ;
+(id)extendedFieldsForEWSMeetingMessageType;
+(id)fieldsToMaintainWhenUpdatingMessageType:(char)arg1 ;
+(id)newEWSItemFromMessage:(id)arg1 data:(id)arg2 flags:(unsigned)arg3 sender:(id)arg4 recipientsByHeaderKey:(id)arg5 categories:(id)arg6 existingProperties:(id)arg7 useSenderInsteadOfFrom:(char)arg8 ;
+(id)EWSItemIdTypesForMessages:(id)arg1 ;
+(id)extendedFieldsForEWSMeetingRequestMessageType;
+(id)extendedFieldsForEWSCalendarType;
+(id)dataFromMimeContent:(id)arg1 ;
+(id)newMessageWithEWSItemType:(id)arg1 ;
+(unsigned)flagsForEWSItemType:(id)arg1 ;
+(id)newAddressesForEWSAddresses:(id)arg1 ;
+(id)newAddressForEWSAddress:(id)arg1 ;
+(char)messageTypeForEWSItemClass:(id)arg1 ;
+(id)_newCustomEWSSetItemWithPropertyName:(id)arg1 boolValue:(char)arg2 ;
+(id)_newEWSSetItemWithPropertyTag:(id)arg1 intValue:(int)arg2 ;
+(id)_newEWSDeleteItemWithPropertyTag:(id)arg1 propertyType:(int)arg2 ;
+(id)_newEWSDeleteItemWithDistinguishedPropertySetId:(int)arg1 propertyType:(int)arg2 propertyId:(long long)arg3 ;
+(id)_newCustomEWSExtendedPropertyWithName:(id)arg1 boolValue:(char)arg2 ;
+(id)_newEWSExtendedPropertyWithTag:(id)arg1 intValue:(int)arg2 ;
+(id)_mimeContentForData:(id)arg1 ;
+(id)_newEWSAddressForAddress:(id)arg1 ;
+(id)_newEWSAddressesForAddresses:(id)arg1 ;
+(id)EWSItemClassForMessageType:(char)arg1 ;
+(id)_extendedFieldsForFlags:(unsigned)arg1 importance:(int*)arg2 ;
+(id)propertiesToGetBeforeUpdatingMessageFlags:(id)arg1 forMessageType:(char)arg2 includesReadReceipts:(char*)arg3 ;
+(id)updatesForEWSItem:(id)arg1 applyingFlags:(id)arg2 ;
+(id)validEWSIdStringsForIdStrings:(id)arg1 ;
+(id)_newEWSHeaderFieldsForMessageHeaders:(id)arg1 encodingHint:(unsigned long long)arg2 ;
+(void)initialize;
-(MCMessageHeaders *)headers;
-(void)setHeaders:(MCMessageHeaders *)arg1 ;
-(NSData *)headerData;
-(long long)libraryID;
-(char)isMessageContentLocallyAvailable;
-(id)remoteID;
-(id)initWithItemId:(id)arg1 changeKey:(id)arg2 ;
-(void)setFetchedBodyData:(NSData *)arg1 ;
-(void)setHeaderData:(NSData *)arg1 ;
-(void)setHeaderAndBodyFromFullData:(id)arg1 ;
-(NSData *)fetchedBodyData;
-(void)setLibraryID:(long long)arg1 ;
-(id)init;
-(char)isEditable;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(id)account;
-(NSString *)changeKey;
-(void)setChangeKey:(NSString *)arg1 ;
-(id)mailbox;
-(NSString *)itemId;
-(void)setItemId:(NSString *)arg1 ;
@end


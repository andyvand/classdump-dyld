/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EWSMimeContentType, EWSItemIdType, EWSFolderIdType, NSString, EWSBodyType, NSArray, NSDateComponents, EWSEffectiveRightsType;

@interface EWSItemType : NSObject {

	EWSMimeContentType* _MimeContent;
	EWSItemIdType* _ItemId;
	EWSFolderIdType* _ParentFolderId;
	NSString* _ItemClass;
	NSString* _Subject;
	int _Sensitivity;
	EWSBodyType* _Body;
	NSArray* _Attachments;
	NSDateComponents* _DateTimeReceived;
	long long _Size;
	char _SizeSpecified;
	NSArray* _Categories;
	int _Importance;
	NSString* _InReplyTo;
	char _IsSubmitted;
	char _IsSubmittedSpecified;
	char _IsDraft;
	char _IsDraftSpecified;
	char _IsFromMe;
	char _IsFromMeSpecified;
	char _IsResend;
	char _IsResendSpecified;
	char _IsUnmodified;
	char _IsUnmodifiedSpecified;
	NSArray* _InternetMessageHeaders;
	NSDateComponents* _DateTimeSent;
	NSDateComponents* _DateTimeCreated;
	NSArray* _ResponseObjects;
	NSDateComponents* _ReminderDueBy;
	char _ReminderIsSet;
	char _ReminderIsSetSpecified;
	long long _ReminderMinutesBeforeStart;
	char _ReminderMinutesBeforeStartSpecified;
	NSString* _DisplayCc;
	NSString* _DisplayTo;
	char _HasAttachments;
	char _HasAttachmentsSpecified;
	NSArray* _ExtendedProperty;
	NSString* _Culture;
	NSString* _LastModifiedName;
	NSDateComponents* _LastModifiedTime;
	EWSEffectiveRightsType* _EffectiveRights;

}

@property (nonatomic,retain) EWSMimeContentType * MimeContent;                      //@synthesize MimeContent=_MimeContent - In the implementation block
@property (nonatomic,retain) EWSItemIdType * ItemId;                                //@synthesize ItemId=_ItemId - In the implementation block
@property (nonatomic,retain) EWSFolderIdType * ParentFolderId;                      //@synthesize ParentFolderId=_ParentFolderId - In the implementation block
@property (nonatomic,copy) NSString * ItemClass;                                    //@synthesize ItemClass=_ItemClass - In the implementation block
@property (setter=ubject,nonatomic,copy) NSString * Subject;                        //@synthesize Subject=_Subject - In the implementation block
@property (assign,setter=ensitivity,nonatomic) int Sensitivity;                     //@synthesize Sensitivity=_Sensitivity - In the implementation block
@property (nonatomic,retain) EWSBodyType * Body;                                    //@synthesize Body=_Body - In the implementation block
@property (nonatomic,copy) NSArray * Attachments;                                   //@synthesize Attachments=_Attachments - In the implementation block
@property (nonatomic,retain) NSDateComponents * DateTimeReceived;                   //@synthesize DateTimeReceived=_DateTimeReceived - In the implementation block
@property (assign,nonatomic) long long Size; 
@property (assign,setter=izeSpecified,nonatomic) char SizeSpecified;                //@synthesize SizeSpecified=_SizeSpecified - In the implementation block
@property (nonatomic,copy) NSArray * Categories;                                    //@synthesize Categories=_Categories - In the implementation block
@property (assign,nonatomic) int Importance;                                        //@synthesize Importance=_Importance - In the implementation block
@property (nonatomic,copy) NSString * InReplyTo;                                    //@synthesize InReplyTo=_InReplyTo - In the implementation block
@property (assign,nonatomic) char IsSubmitted;                                      //@synthesize IsSubmitted=_IsSubmitted - In the implementation block
@property (assign,nonatomic) char IsSubmittedSpecified;                             //@synthesize IsSubmittedSpecified=_IsSubmittedSpecified - In the implementation block
@property (assign,nonatomic) char IsDraft;                                          //@synthesize IsDraft=_IsDraft - In the implementation block
@property (assign,nonatomic) char IsDraftSpecified;                                 //@synthesize IsDraftSpecified=_IsDraftSpecified - In the implementation block
@property (assign,nonatomic) char IsFromMe;                                         //@synthesize IsFromMe=_IsFromMe - In the implementation block
@property (assign,nonatomic) char IsFromMeSpecified;                                //@synthesize IsFromMeSpecified=_IsFromMeSpecified - In the implementation block
@property (assign,nonatomic) char IsResend;                                         //@synthesize IsResend=_IsResend - In the implementation block
@property (assign,nonatomic) char IsResendSpecified;                                //@synthesize IsResendSpecified=_IsResendSpecified - In the implementation block
@property (assign,nonatomic) char IsUnmodified;                                     //@synthesize IsUnmodified=_IsUnmodified - In the implementation block
@property (assign,nonatomic) char IsUnmodifiedSpecified;                            //@synthesize IsUnmodifiedSpecified=_IsUnmodifiedSpecified - In the implementation block
@property (nonatomic,copy) NSArray * InternetMessageHeaders;                        //@synthesize InternetMessageHeaders=_InternetMessageHeaders - In the implementation block
@property (nonatomic,retain) NSDateComponents * DateTimeSent;                       //@synthesize DateTimeSent=_DateTimeSent - In the implementation block
@property (nonatomic,retain) NSDateComponents * DateTimeCreated;                    //@synthesize DateTimeCreated=_DateTimeCreated - In the implementation block
@property (nonatomic,copy) NSArray * ResponseObjects;                               //@synthesize ResponseObjects=_ResponseObjects - In the implementation block
@property (nonatomic,retain) NSDateComponents * ReminderDueBy;                      //@synthesize ReminderDueBy=_ReminderDueBy - In the implementation block
@property (assign,nonatomic) char ReminderIsSet;                                    //@synthesize ReminderIsSet=_ReminderIsSet - In the implementation block
@property (assign,nonatomic) char ReminderIsSetSpecified;                           //@synthesize ReminderIsSetSpecified=_ReminderIsSetSpecified - In the implementation block
@property (assign,nonatomic) long long ReminderMinutesBeforeStart;                  //@synthesize ReminderMinutesBeforeStart=_ReminderMinutesBeforeStart - In the implementation block
@property (assign,nonatomic) char ReminderMinutesBeforeStartSpecified;              //@synthesize ReminderMinutesBeforeStartSpecified=_ReminderMinutesBeforeStartSpecified - In the implementation block
@property (nonatomic,copy) NSString * DisplayCc;                                    //@synthesize DisplayCc=_DisplayCc - In the implementation block
@property (nonatomic,copy) NSString * DisplayTo;                                    //@synthesize DisplayTo=_DisplayTo - In the implementation block
@property (assign,nonatomic) char HasAttachments;                                   //@synthesize HasAttachments=_HasAttachments - In the implementation block
@property (assign,nonatomic) char HasAttachmentsSpecified;                          //@synthesize HasAttachmentsSpecified=_HasAttachmentsSpecified - In the implementation block
@property (nonatomic,copy) NSArray * ExtendedProperty;                              //@synthesize ExtendedProperty=_ExtendedProperty - In the implementation block
@property (nonatomic,copy) NSString * Culture;                                      //@synthesize Culture=_Culture - In the implementation block
@property (nonatomic,copy) NSString * LastModifiedName;                             //@synthesize LastModifiedName=_LastModifiedName - In the implementation block
@property (nonatomic,retain) NSDateComponents * LastModifiedTime;                   //@synthesize LastModifiedTime=_LastModifiedTime - In the implementation block
@property (nonatomic,retain) EWSEffectiveRightsType * EffectiveRights;              //@synthesize EffectiveRights=_EffectiveRights - In the implementation block
+(id)definition;
-(void)setBody:(EWSBodyType *)arg1 ;
-(void)setEffectiveRights:(EWSEffectiveRightsType *)arg1 ;
-(void)setValue:(id)arg1 forUnindexedFieldURI:(int)arg2 ;
-(void)setDateTimeReceived:(NSDateComponents *)arg1 ;
-(char)SizeSpecified;
-(void)setSizeSpecified:(char)arg1 ;
-(NSString *)InReplyTo;
-(void)setInReplyTo:(NSString *)arg1 ;
-(char)IsSubmitted;
-(void)setIsSubmitted:(char)arg1 ;
-(char)IsSubmittedSpecified;
-(void)setIsSubmittedSpecified:(char)arg1 ;
-(void)setIsDraft:(char)arg1 ;
-(char)IsDraftSpecified;
-(void)setIsDraftSpecified:(char)arg1 ;
-(char)IsFromMe;
-(void)setIsFromMe:(char)arg1 ;
-(char)IsFromMeSpecified;
-(void)setIsFromMeSpecified:(char)arg1 ;
-(char)IsResend;
-(void)setIsResend:(char)arg1 ;
-(char)IsResendSpecified;
-(void)setIsResendSpecified:(char)arg1 ;
-(char)IsUnmodified;
-(void)setIsUnmodified:(char)arg1 ;
-(char)IsUnmodifiedSpecified;
-(void)setIsUnmodifiedSpecified:(char)arg1 ;
-(void)setInternetMessageHeaders:(NSArray *)arg1 ;
-(void)setDateTimeSent:(NSDateComponents *)arg1 ;
-(void)setDateTimeCreated:(NSDateComponents *)arg1 ;
-(NSArray *)ResponseObjects;
-(void)setResponseObjects:(NSArray *)arg1 ;
-(char)ReminderIsSetSpecified;
-(char)ReminderMinutesBeforeStartSpecified;
-(NSString *)DisplayCc;
-(void)setDisplayCc:(NSString *)arg1 ;
-(NSString *)DisplayTo;
-(void)setDisplayTo:(NSString *)arg1 ;
-(void)setHasAttachments:(char)arg1 ;
-(char)HasAttachmentsSpecified;
-(void)setHasAttachmentsSpecified:(char)arg1 ;
-(NSString *)Culture;
-(void)setCulture:(NSString *)arg1 ;
-(NSString *)LastModifiedName;
-(void)setLastModifiedName:(NSString *)arg1 ;
-(NSDateComponents *)LastModifiedTime;
-(void)setLastModifiedTime:(NSDateComponents *)arg1 ;
-(NSArray *)Categories;
-(long long)Size;
-(EWSMimeContentType *)MimeContent;
-(NSDateComponents *)DateTimeReceived;
-(NSDateComponents *)DateTimeSent;
-(NSArray *)InternetMessageHeaders;
-(NSString *)ItemClass;
-(char)IsDraft;
-(char)HasAttachments;
-(void)setMimeContent:(EWSMimeContentType *)arg1 ;
-(void)setItemClass:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setSize:(long long)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(EWSItemIdType *)ItemId;
-(EWSFolderIdType *)ParentFolderId;
-(NSArray *)ExtendedProperty;
-(NSArray *)Attachments;
-(void)setSensitivity:(int)arg1 ;
-(NSString *)Subject;
-(void)setReminderIsSet:(char)arg1 ;
-(void)setReminderIsSetSpecified:(char)arg1 ;
-(void)setReminderMinutesBeforeStartSpecified:(char)arg1 ;
-(void)setReminderMinutesBeforeStart:(long long)arg1 ;
-(void)setItemId:(EWSItemIdType *)arg1 ;
-(void)setImportance:(int)arg1 ;
-(void)setReminderDueBy:(NSDateComponents *)arg1 ;
-(void)setExtendedProperty:(NSArray *)arg1 ;
-(void)setParentFolderId:(EWSFolderIdType *)arg1 ;
-(char)ReminderIsSet;
-(long long)ReminderMinutesBeforeStart;
-(NSDateComponents *)ReminderDueBy;
-(int)Sensitivity;
-(NSDateComponents *)DateTimeCreated;
-(EWSBodyType *)Body;
-(int)Importance;
-(EWSEffectiveRightsType *)EffectiveRights;
@end


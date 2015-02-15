/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNContactVCardExtraInfo : NSObject {

	NSString* _cardDAVUID;
	NSArray* _calendarURIs;
	NSArray* _unknownProperties;
	NSArray* _namesOfParentGroups;
	NSArray* _imageReferences;
	NSString* _imagesFolder;
	char _isMe;

}

@property (copy) NSString * cardDAVUID;                      //@synthesize cardDAVUID=_cardDAVUID - In the implementation block
@property (copy) NSArray * calendarURIs;                     //@synthesize calendarURIs=_calendarURIs - In the implementation block
@property (copy) NSArray * unknownProperties;                //@synthesize unknownProperties=_unknownProperties - In the implementation block
@property (copy) NSArray * namesOfParentGroups;              //@synthesize namesOfParentGroups=_namesOfParentGroups - In the implementation block
@property (copy) NSArray * imageReferences;                  //@synthesize imageReferences=_imageReferences - In the implementation block
@property (copy) NSString * imagesFolder;                    //@synthesize imagesFolder=_imagesFolder - In the implementation block
@property (assign) char isMe;                                //@synthesize isMe=_isMe - In the implementation block
+(id)combineExtraInfos:(id)arg1 ;
-(NSArray *)imageReferences;
-(NSArray *)calendarURIs;
-(NSString *)cardDAVUID;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(NSString *)imagesFolder;
-(NSArray *)namesOfParentGroups;
-(NSArray *)unknownProperties;
-(void)setUnknownProperties:(NSArray *)arg1 ;
-(void)setNamesOfParentGroups:(NSArray *)arg1 ;
-(void)setImageReferences:(NSArray *)arg1 ;
-(void)setImagesFolder:(NSString *)arg1 ;
-(void)setIsMe:(char)arg1 ;
-(char)isMe;
-(void)dealloc;
@end


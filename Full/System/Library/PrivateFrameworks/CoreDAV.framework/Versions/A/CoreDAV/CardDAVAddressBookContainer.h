/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {

	NSString* _maxResourceSize;
	NSString* _maxImageSize;
	NSURL* _meCardURL;

}

@property (nonatomic,retain) NSString * maxResourceSize;              //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (nonatomic,retain) NSString * maxImageSize;                 //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (nonatomic,retain) NSURL * meCardURL;                       //@synthesize meCardURL=_meCardURL - In the implementation block
@property (nonatomic,readonly) char isAddressBook; 
@property (nonatomic,readonly) char isSharedAddressBook; 
@property (nonatomic,readonly) char isSearchAddressBook; 
+(id)copyPropertyMappingsForParser;
-(NSString *)maxImageSize;
-(void)setMaxImageSize:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)applyParsedProperties:(id)arg1 ;
-(NSString *)maxResourceSize;
-(void)setMaxResourceSize:(NSString *)arg1 ;
-(void)setMeCardURL:(NSURL *)arg1 ;
-(char)isAddressBook;
-(char)isSearchAddressBook;
-(char)isSharedAddressBook;
-(NSURL *)meCardURL;
@end


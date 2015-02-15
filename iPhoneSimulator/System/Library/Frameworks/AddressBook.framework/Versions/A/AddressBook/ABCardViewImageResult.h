/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSCopying.h>

@class NSImage, NSString;

@interface ABCardViewImageResult : NSObject <NSCopying> {

	NSImage* _image;
	NSString* _photoIdentifier;
	char _placeholder;

}

@property (retain,readonly) NSImage * image;                             //@synthesize image=_image - In the implementation block
@property (copy,readonly) NSString * photoIdentifier;                    //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
@property (getter=isPlaceholder,readonly) char placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(NSString *)photoIdentifier;
-(id)initWithImage:(id)arg1 photoIdentifier:(id)arg2 isPlaceholder:(char)arg3 ;
-(char)isPlaceholder;
-(void)dealloc;
-(NSImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


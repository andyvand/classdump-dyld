/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSCopying.h>

@class NSString;

@interface ABACE : NSObject <NSCopying> {

	NSString* _principal;
	int _type;
	char _read;
	char _write;
	char _inherited;
	char _protected;

}
-(id)initWithPrincipal:(id)arg1 ;
-(void)setCanRead:(char)arg1 ;
-(void)setCanWrite:(char)arg1 ;
-(char)canRead;
-(char)canWrite;
-(char)isProtected;
-(char)isInherited;
-(id)initWithACENode:(id)arg1 ;
-(id)initWithCurrentUserPrivNode:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setPrincipal:(id)arg1 ;
-(id)principal;
@end


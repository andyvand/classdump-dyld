/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCountedSet;

@interface ABMetadataIgnoredDirectories : NSObject {

	NSCountedSet* _ignoredDirectories;

}
-(void)runWithIgnoredDirectory:(id)arg1 block:(/*^block*/id)arg2 ;
-(char)shouldIngoreDirectory:(id)arg1 ;
-(void)addDirectory:(id)arg1 ;
-(void)removeDirectory:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

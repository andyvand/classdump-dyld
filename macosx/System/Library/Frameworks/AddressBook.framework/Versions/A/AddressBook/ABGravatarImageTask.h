/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABTask.h>

@class NSArray;

@interface ABGravatarImageTask : ABTask {

	NSArray* _emailAddresses;

}
-(id)initWithEmailAddresses:(id)arg1 ;
-(id)hashForEmailAddress:(id)arg1 ;
-(id)filenameForEmailAddress:(id)arg1 ;
-(id)urlForEmailAddress:(id)arg1 ;
-(void)dealloc;
-(long long)imageSize;
-(id)run:(id*)arg1 ;
@end


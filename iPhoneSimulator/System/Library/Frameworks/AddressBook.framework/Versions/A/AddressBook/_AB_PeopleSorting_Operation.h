/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <Foundation/NSOperation.h>

@interface _AB_PeopleSorting_Operation : NSOperation {

	id* _people;
	NSRange _range;
	NSRange _mergeRange;
	unsigned long long _type;
	void* _context;

}
-(id)initForCArray:(id*)arg1 withContext:(void*)arg2 andRange:(NSRange)arg3 mergeWithRange:(NSRange)arg4 withType:(unsigned long long)arg5 ;
-(void)main;
@end


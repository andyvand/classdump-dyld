/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABMultiValue.h>

@interface ABMutableMultiValue : ABMultiValue
-(id)insertValue:(id)arg1 withLabel:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(char)removeValueAndLabelAtIndex:(unsigned long long)arg1 ;
-(char)replaceValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2 ;
-(char)replaceLabelAtIndex:(unsigned long long)arg1 withLabel:(id)arg2 ;
-(id)_initWithIdentifiers:(id)arg1 values:(id)arg2 labels:(id)arg3 primaryIdentifier:(id)arg4 ;
-(void)_appendValue:(id)arg1 withLabel:(id)arg2 andIdentifier:(id)arg3 ;
-(void)_createArrays;
-(void)_moveContentsAt:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_combineWithMultiValue:(id)arg1 updating:(char)arg2 ;
-(void)_sortLabelsUsing:(id)arg1 ;
-(void)_sortIdentifiersUsingComparator:(/*^block*/id)arg1 ;
-(void)_removeValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)addValue:(id)arg1 withLabel:(id)arg2 ;
-(char)setPrimaryIdentifier:(id)arg1 ;
@end

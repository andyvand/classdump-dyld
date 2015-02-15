/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABCardViewMultiValue.h>
#import <AddressBook/ABCardViewMutableMultiValue.h>

@protocol ABCardViewMutableMultiValue <ABCardViewMultiValue>
@required
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
-(void)replaceLabelAtIndex:(unsigned long long)arg1 withLabel:(id)arg2;
-(void)setIsPrivateValue:(char)arg1 index:(unsigned long long)arg2;
-(id)addEmptyValueWithLabel:(id)arg1;
-(id)addEmptyValueAndLabel;
-(void)setReadOnly:(char)arg1 atIndex:(unsigned long long)arg2;
-(void)replaceAccountNameAtIndex:(unsigned long long)arg1 withAccountName:(id)arg2;
-(void)setAccountBadge:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)removeEntryAtIndex:(unsigned long long)arg1;
-(id)addValue:(id)arg1 withLabel:(id)arg2;

@end


@class NSString;

@interface ABCardViewMutableMultiValue : ABCardViewMultiValue <ABCardViewMutableMultiValue>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2 ;
-(void)replaceLabelAtIndex:(unsigned long long)arg1 withLabel:(id)arg2 ;
-(void)setIsPrivateValue:(char)arg1 index:(unsigned long long)arg2 ;
-(id)addEmptyValueWithLabel:(id)arg1 ;
-(id)addEmptyValueAndLabel;
-(void)setPersonIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setPersonIdentifiers:(id)arg1 ;
-(void)addValue:(id)arg1 withLabel:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setMultiValueIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setReadOnly:(char)arg1 atIndex:(unsigned long long)arg2 ;
-(void)duplicateEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)replaceAccountNameAtIndex:(unsigned long long)arg1 withAccountName:(id)arg2 ;
-(void)setAccountBadge:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDuplicate:(char)arg1 atIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeEntryAtIndex:(unsigned long long)arg1 ;
-(id)addValue:(id)arg1 withLabel:(id)arg2 ;
-(void)setProperty:(id)arg1 ;
@end

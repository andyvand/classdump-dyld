/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABSearchElementTransformer.h>

@interface ABLegacyIMSearchElementTransformer : ABSearchElementTransformer
+(id)sharedLegacyIMTransformer;
-(id)transformSearchElement:(id)arg1 ;
-(id)transformConjunction:(id)arg1 ;
-(char)isLegacyIMSearchElement:(id)arg1 ;
-(id)recursivelyTransformChildren:(id)arg1 ;
-(id)convertToModernIMSearchElement:(id)arg1 ;
@end


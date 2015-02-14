/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString;

@interface CNContactNameFormatter : NSFormatter {

	NSString* _sortOrder;

}

@property (copy) NSString * sortOrder;              //@synthesize sortOrder=_sortOrder - In the implementation block
+(id)shortNameForContact:(id)arg1 ;
-(id)attributedNameForContact:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(char)shouldFormatNameAsCompany:(id)arg1 ;
-(id)attributedNameForCompany:(id)arg1 defaultAttributes:(id)arg2 ;
-(id)nameForContact:(id)arg1 sortOrder:(id)arg2 emphasisRange:(NSRange*)arg3 ;
-(id)emphasisAttributes;
-(id)nameKeysForNameOrder:(long long)arg1 ;
-(id)preferredEmphasisKeysForSortOrder:(id)arg1 ;
-(id)attributedNameForContact:(id)arg1 ;
-(void)setSortOrder:(NSString *)arg1 ;
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(NSString *)sortOrder;
-(id)nameForContact:(id)arg1 ;
@end


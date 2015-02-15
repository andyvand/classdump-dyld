/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABGroupListStyleProvider.h>

@protocol ABGroupListStyleProvider <NSObject>
@required
-(id)accountIcon;
-(id)folderIcon;
-(id)groupIcon;
-(id)directoryIcon;
-(id)smartGroupIcon;
-(id)lastImportIcon;
-(id)directoryString;

@end


@class NSString;

@interface ABGroupListStyleProvider : NSObject <ABGroupListStyleProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)styleProvider;
-(id)accountIcon;
-(id)folderIcon;
-(id)groupIcon;
-(id)directoryIcon;
-(id)smartGroupIcon;
-(id)lastImportIcon;
-(id)directoryString;
@end

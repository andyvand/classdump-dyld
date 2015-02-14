/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <AppKit/NSWindow.h>
#import <Backup/NSUserInterfaceItemIdentification.h>

@class NSString;

@interface BU_TBackupWindow : NSWindow <NSUserInterfaceItemIdentification>

@property (copy) NSString * identifier; 
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(BOOL)_allowsOrdering;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
@end


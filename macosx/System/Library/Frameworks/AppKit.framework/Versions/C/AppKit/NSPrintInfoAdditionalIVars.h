/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSData, NSPrintInfoDictionaryProxy;

@interface NSPrintInfoAdditionalIVars : NSObject {

	OpaquePMPrintSessionRef printSession;
	OpaquePMPageFormatRef pageFormat;
	OpaquePMPrintSettingsRef printSettings;
	NSData* flattenedPageFormatData;
	NSData* flattenedPrintSettingsData;
	char printSessionIsReconciled;
	char pageFormatIsReconciled;
	char printSettingsIsReconciled;
	char pageFormatIsValidated;
	char printSettingsIsValidated;
	NSPrintInfoDictionaryProxy* attributesDictionaryProxy;
	NSPrintInfoDictionaryProxy* printSettingsDictionaryProxy;
	char printerWasSetExplicitly;

}
@end


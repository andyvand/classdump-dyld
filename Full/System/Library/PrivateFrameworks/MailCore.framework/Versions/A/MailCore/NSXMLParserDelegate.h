/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSXMLParserDelegate <NSObject>
@optional
-(void)parserDidStartDocument:(id)arg1;
-(void)parserDidEndDocument:(id)arg1;
-(void)parser:(id)arg1 foundNotationDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
-(void)parser:(id)arg1 foundUnparsedEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4 notationName:(id)arg5;
-(void)parser:(id)arg1 foundAttributeDeclarationWithName:(id)arg2 forElement:(id)arg3 type:(id)arg4 defaultValue:(id)arg5;
-(void)parser:(id)arg1 foundElementDeclarationWithName:(id)arg2 model:(id)arg3;
-(void)parser:(id)arg1 foundInternalEntityDeclarationWithName:(id)arg2 value:(id)arg3;
-(void)parser:(id)arg1 foundExternalEntityDeclarationWithName:(id)arg2 publicID:(id)arg3 systemID:(id)arg4;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)parser:(id)arg1 didStartMappingPrefix:(id)arg2 toURI:(id)arg3;
-(void)parser:(id)arg1 didEndMappingPrefix:(id)arg2;
-(void)parser:(id)arg1 foundCharacters:(id)arg2;
-(void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
-(void)parser:(id)arg1 foundProcessingInstructionWithTarget:(id)arg2 data:(id)arg3;
-(void)parser:(id)arg1 foundComment:(id)arg2;
-(void)parser:(id)arg1 foundCDATA:(id)arg2;
-(id)parser:(id)arg1 resolveExternalEntityName:(id)arg2 systemID:(id)arg3;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2;

@end


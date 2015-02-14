+[PKInstallStateHelper stringFromInstallState:]
+[PKInstallStateHelper localizedDescriptionForInstallState:]
-[PKDataSizeFormatter stringForObjectValue:]
+[PKDataSizeValueTransformer transformedValueClass]
-[PKDataSizeValueTransformer transformedValue:]
-[PKTimeRemainingFormatter stringForObjectValue:]
+[PKTimeRemainingValueTransformer transformedValueClass]
-[PKTimeRemainingValueTransformer transformedValue:]
+[PKInstallClient initialize]
+[PKInstallClient registerAuthorization:]
___41+[PKInstallClient registerAuthorization:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[PKInstallClient unregisterAuthorizations]
+[PKInstallClient _modifyConnectionsForRegisteredAuthorizations:]
___65+[PKInstallClient _modifyConnectionsForRegisteredAuthorizations:]_block_invoke
___65+[PKInstallClient _modifyConnectionsForRegisteredAuthorizations:]_block_invoke_2
___copy_helper_block_35
___destroy_helper_block_36
+[PKInstallClient estimatedTimeForInstallRequest:]
+[PKInstallClient isCurrentlyStagedInstallRequest:purgeableSize:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___65+[PKInstallClient isCurrentlyStagedInstallRequest:purgeableSize:]_block_invoke
___copy_helper_block_52
___destroy_helper_block_53
-[PKInstallClient initWithRequest:delegate:error:]
-[PKInstallClient initWithRequest:inUserContext:delegate:error:]
-[PKInstallClient initWithRequest:inUserContext:holdingBoostDuringInstall:delegate:error:]
-[PKInstallClient initForCurrentCommitWithDelegate:ignoringBlockingClients:error:]
-[PKInstallClient initWithRequest:delegate:options:error:]
-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke
___copy_helper_block_108
___destroy_helper_block_109
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke115
___copy_helper_block_116
___destroy_helper_block_117
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke128
___copy_helper_block_134
___destroy_helper_block_135
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke141
___copy_helper_block_144
___destroy_helper_block_145
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke154
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke_2
___copy_helper_block_159
___destroy_helper_block_160
___copy_helper_block_166
___destroy_helper_block_167
___83-[PKInstallClient _initWithRequest:options:ignoringBlockingClients:delegate:error:]_block_invoke170
___copy_helper_block_171
___destroy_helper_block_172
-[PKInstallClient dealloc]
-[PKInstallClient request]
-[PKInstallClient displayNames]
___31-[PKInstallClient displayNames]_block_invoke
___copy_helper_block_188
___destroy_helper_block_189
-[PKInstallClient _installDaemonDidBeginInstall_OnMainThread]
+[PKInstallClient _connectToDaemonForAuthLevel:privileged:recursiveInstall:forInstance:]
-[PKInstallClient _installStatusByConnectingToDaemon]
___53-[PKInstallClient _installStatusByConnectingToDaemon]_block_invoke
___copy_helper_block_201
___destroy_helper_block_202
-[PKInstallClient _scheduleStatusTimerOnCurrentThread]
-[PKInstallClient _statusTimerHasFired:]
-[PKInstallClient _finishInstallClientOnMainThreadWithError:]
-[PKInstallClient _localPackageForRemoteSpecifier:]
-[PKInstallClient _installDaemonDidEndInstallWithError:registrationPaths:]
___74-[PKInstallClient _installDaemonDidEndInstallWithError:registrationPaths:]_block_invoke
___74-[PKInstallClient _installDaemonDidEndInstallWithError:registrationPaths:]_block_invoke_2
___copy_helper_block_249
___destroy_helper_block_250
___copy_helper_block_253
___destroy_helper_block_254
-[PKInstallClient installDidBeginForToken:]
-[PKInstallClient installDidBeginCommitForToken:]
-[PKInstallClient installDidEndForToken:]
+[PKInstallClient(ForReclaimSpaceAgent) estimateOfPurgeableSpaceForSandboxesOnVolume:]
___86+[PKInstallClient(ForReclaimSpaceAgent) estimateOfPurgeableSpaceForSandboxesOnVolume:]_block_invoke
___copy_helper_block_303
___destroy_helper_block_304
+[PKInstallClient(ForReclaimSpaceAgent) purgeSandboxesOnVolume:untilFreeSpaceAvailable:]
___88+[PKInstallClient(ForReclaimSpaceAgent) purgeSandboxesOnVolume:untilFreeSpaceAvailable:]_block_invoke
___copy_helper_block_310
___destroy_helper_block_311
-[_PKInstallClientConnection init]
-[_PKInstallClientConnection dealloc]
-[_PKInstallClientConnection connectToDaemon:privileged:clientObject:]
___70-[_PKInstallClientConnection connectToDaemon:privileged:clientObject:]_block_invoke
___70-[_PKInstallClientConnection connectToDaemon:privileged:clientObject:]_block_invoke_2
___70-[_PKInstallClientConnection connectToDaemon:privileged:clientObject:]_block_invoke_3
___copy_helper_block_339
___destroy_helper_block_340
___copy_helper_block_343
___destroy_helper_block_344
-[_PKInstallClientConnection isServiceRemote]
-[_PKInstallClientConnection proxy]
___35-[_PKInstallClientConnection proxy]_block_invoke
-[_PKInstallClientConnection blockingProxy]
___43-[_PKInstallClientConnection blockingProxy]_block_invoke
___copy_helper_block_364
___destroy_helper_block_365
-[_PKInstallClientConnection signal]
-[_PKInstallClientConnection waitUntilDone]
-[_PKInstallClientConnection waitUntilDoneOrTimedOut]
-[_PKInstallClientConnection invalidate]
-[_PKInstallClientConnection installDidBeginForToken:]
-[_PKInstallClientConnection installDidBeginCommitForToken:]
-[_PKInstallClientConnection installDidEndForToken:]
-[NSURL(WorkaroundRadar5693346) replacementObjectForPortCoder:]
+[PKInstallDaemon sharedServiceDaemon]
___38+[PKInstallDaemon sharedServiceDaemon]_block_invoke
-[PKInstallDaemon init]
-[PKInstallDaemon dealloc]
-[PKInstallDaemon startListeningForConnectionsToService:]
-[PKInstallDaemon _descriptionForToken:]
-[PKInstallDaemon description]
-[PKInstallDaemon tokenForInstallRequest:reply:]
___48-[PKInstallDaemon tokenForInstallRequest:reply:]_block_invoke
___48-[PKInstallDaemon tokenForInstallRequest:reply:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_88
___destroy_helper_block_89
-[PKInstallDaemon addToken:reply:]
___34-[PKInstallDaemon addToken:reply:]_block_invoke
___34-[PKInstallDaemon addToken:reply:]_block_invoke_2
___copy_helper_block_104
___destroy_helper_block_105
___copy_helper_block_115
___destroy_helper_block_116
-[PKInstallDaemon installStatusForToken:reply:]
___47-[PKInstallDaemon installStatusForToken:reply:]_block_invoke
___Block_byref_object_copy_
___Block_byref_object_dispose_
___47-[PKInstallDaemon installStatusForToken:reply:]_block_invoke119
___copy_helper_block_122
___destroy_helper_block_123
___copy_helper_block_147
___destroy_helper_block_148
-[PKInstallDaemon displayNamesForToken:reply:]
___46-[PKInstallDaemon displayNamesForToken:reply:]_block_invoke
___46-[PKInstallDaemon displayNamesForToken:reply:]_block_invoke_2
___copy_helper_block_151
___destroy_helper_block_152
___copy_helper_block_166
___destroy_helper_block_167
-[PKInstallDaemon tokenForCurrentCommitIgnoringBlockingClients:reply:]
___70-[PKInstallDaemon tokenForCurrentCommitIgnoringBlockingClients:reply:]_block_invoke
___70-[PKInstallDaemon tokenForCurrentCommitIgnoringBlockingClients:reply:]_block_invoke_2
___70-[PKInstallDaemon tokenForCurrentCommitIgnoringBlockingClients:reply:]_block_invoke_3
___copy_helper_block_174
___destroy_helper_block_175
___copy_helper_block_180
___destroy_helper_block_181
___copy_helper_block_184
___destroy_helper_block_185
-[PKInstallDaemon adoptToken:reply:]
___36-[PKInstallDaemon adoptToken:reply:]_block_invoke
___copy_helper_block_188
___destroy_helper_block_189
-[PKInstallDaemon registerAuthorizationFromInstallRequest:reply:]
___65-[PKInstallDaemon registerAuthorizationFromInstallRequest:reply:]_block_invoke
___copy_helper_block_194
___destroy_helper_block_195
-[PKInstallDaemon currentStageStatusOfInstallRequest:calculatePurgeableSize:reply:]
___83-[PKInstallDaemon currentStageStatusOfInstallRequest:calculatePurgeableSize:reply:]_block_invoke
___copy_helper_block_208
___destroy_helper_block_209
-[PKInstallDaemon estimateOfPurgeableSpaceForSandboxesOnVolume:reply:]
___70-[PKInstallDaemon estimateOfPurgeableSpaceForSandboxesOnVolume:reply:]_block_invoke
___copy_helper_block_214
___destroy_helper_block_215
-[PKInstallDaemon startPurgeOfSandboxesOnVolume:untilFreeSpaceAvailable:reply:]
___79-[PKInstallDaemon startPurgeOfSandboxesOnVolume:untilFreeSpaceAvailable:reply:]_block_invoke
___79-[PKInstallDaemon startPurgeOfSandboxesOnVolume:untilFreeSpaceAvailable:reply:]_block_invoke_2
___copy_helper_block_225
___destroy_helper_block_226
___copy_helper_block_232
___destroy_helper_block_233
-[PKInstallDaemon _currentClients]
___34-[PKInstallDaemon _currentClients]_block_invoke
___copy_helper_block_239
___destroy_helper_block_240
-[PKInstallDaemon startNextInstallIfNeeded]
___43-[PKInstallDaemon startNextInstallIfNeeded]_block_invoke
___copy_helper_block_251
___destroy_helper_block_252
+[PKInstallDaemon doingRecursiveInstall]
-[PKInstallDaemon removeTokenIfPossible:]
___41-[PKInstallDaemon removeTokenIfPossible:]_block_invoke
___copy_helper_block_273
___destroy_helper_block_274
-[PKInstallDaemon _attachToToken:withDoneBlock:]
___48-[PKInstallDaemon _attachToToken:withDoneBlock:]_block_invoke
___copy_helper_block_281
___destroy_helper_block_282
-[PKInstallDaemon _invokeDoneBlocksForToken:]
___45-[PKInstallDaemon _invokeDoneBlocksForToken:]_block_invoke
___45-[PKInstallDaemon _invokeDoneBlocksForToken:]_block_invoke_2
___copy_helper_block_291
___destroy_helper_block_292
___copy_helper_block_295
___destroy_helper_block_296
-[PKInstallDaemon _evaluateSecurityOfRequest:]
-[PKInstallDaemon _requestHasValidAuthorization:allowInteraction:]
-[PKInstallDaemon _isProvidingPrivilegeEscalation]
-[PKInstallDaemon _runIdleTasks]
___32-[PKInstallDaemon _runIdleTasks]_block_invoke
___32-[PKInstallDaemon _runIdleTasks]_block_invoke_2
-[PKInstallDaemon listener:shouldAcceptNewConnection:]
___54-[PKInstallDaemon listener:shouldAcceptNewConnection:]_block_invoke
___copy_helper_block_329
___destroy_helper_block_330
___54-[PKInstallDaemon listener:shouldAcceptNewConnection:]_block_invoke333
___54-[PKInstallDaemon listener:shouldAcceptNewConnection:]_block_invoke_2
___54-[PKInstallDaemon listener:shouldAcceptNewConnection:]_block_invoke_3
___copy_helper_block_335
___destroy_helper_block_336
___copy_helper_block_343
___destroy_helper_block_344
___copy_helper_block_347
___destroy_helper_block_348
-[PKInstallDaemon(PKInstallDelegate) installDidBegin:]
___54-[PKInstallDaemon(PKInstallDelegate) installDidBegin:]_block_invoke
___copy_helper_block_452
___destroy_helper_block_453
-[PKInstallDaemon(PKInstallDelegate) installWillFinish:]
___56-[PKInstallDaemon(PKInstallDelegate) installWillFinish:]_block_invoke
___copy_helper_block_458
___destroy_helper_block_459
-[PKInstallDaemon(PKInstallDelegate) _installDidEnd]
___52-[PKInstallDaemon(PKInstallDelegate) _installDidEnd]_block_invoke
___copy_helper_block_463
___destroy_helper_block_464
___52-[PKInstallDaemon(PKInstallDelegate) _installDidEnd]_block_invoke467
___copy_helper_block_470
___destroy_helper_block_471
-[PKInstallDaemon(PKInstallDelegate) install:didFailWithError:]
-[PKInstallDaemon(PKInstallDelegate) installDidFinish:]
-[PKInstallDaemon(PKInstallDelegate) installDidCancel:]
_PKInstallDaemonVerboseMode
_PKInstallDaemonRawTransactionCount
+[PKArchive _allArchiveClasses]
+[PKArchive archiveWithPath:]
-[PKArchive description]
-[PKArchive archivePath]
-[PKArchive archiveDigest]
-[PKArchive enumeratorAtPath:]
-[PKArchive dataForPath:]
-[PKArchive extractItemAtPath:toPath:error:]
-[PKArchive fileAttributesAtPath:]
-[PKArchive verifyReturningError:]
-[PKArchive fileExistsAtPath:]
-[PKArchive closeArchive]
-[PKArchive(ForSubclassers) initForReadingFromPath:]
-[PKArchive(ForSubclassers) _extractFile:toPath:error:]
-[PKMutableArchive initForWritingToPath:ofType:error:]
-[PKMutableArchive setData:forPath:compressed:]
-[PKMutableArchive setFile:forPath:compressed:]
-[PKMutableArchive setContentsOfArchive:forPath:]
-[PKMutableArchive(ForSubclassers) initForWritingToPath:error:]
-[PKArchive(SignedArchive) archiveSignatures]
-[PKArchive(SignedArchive) archiveSignatureDate]
-[PKMutableArchive(SignedArchive) addSignatureBySigningWithIdentity:algorithm:]
-[PKMutableArchive(SignedArchive) addSignatureBySigningWithIdentity:algorithm:usingTSAIfSupported:]
-[PKMutableArchive(SignedArchive) addIntermediateCertificate:]
-[PKMutableArchive(SignedArchivePrivate) setSignatureSize:]
-[PKArchiveSignature dealloc]
-[PKArchiveSignature description]
-[PKArchiveSignature certificateRefs]
-[PKArchiveSignature algorithmType]
-[PKArchiveSignature signedDataReturningAlgorithm:]
-[PKArchiveSignature signatureDataReturningAlgorithm:]
-[PKArchiveSignature _hasSigningCertificate:]
-[PKArchiveSignature(Verification) _verifyLegacyWithSignedData:signatureData:error:]
-[PKArchiveSignature(Verification) _verifyCMSWithSignedData:signatureData:error:]
-[PKArchiveSignature(Verification) verifySignedData]
-[PKArchiveSignature(Verification) verifySignedDataReturningError:]
-[PKArchiveSignature(Verification) verificationTrustRef]
__open_with_static_content
-[PKExtendedAttributeEnumerator initWithFileAtPath:options:]
-[PKExtendedAttributeEnumerator dealloc]
-[PKExtendedAttributeEnumerator nextAttribute]
-[PKExtendedAttributeEnumerator rewindToBeginning]
-[PKExtendedAttributeEnumerator _dataForAttributeName:]
-[PKArchiveSigner initWithSigningIdentity:algorithm:usingTSAIfSupported:]
-[PKArchiveSigner finalize]
-[PKArchiveSigner dealloc]
-[PKArchiveSigner signatureSize]
-[PKArchiveSigner setSignatureSize:]
-[PKArchiveSigner signatureDataBySigningData:]
-[PKFolderArchive initForReadingFromPath:]
-[PKFolderArchive dealloc]
-[PKFolderArchive archivePath]
-[PKFolderArchive enumeratorAtPath:]
-[PKFolderArchive dataForPath:]
-[PKFolderArchive extractItemAtPath:toPath:error:]
-[PKFolderArchive fileAttributesAtPath:]
-[PKFolderArchive verifyReturningError:]
-[PKFolderArchive fileExistsAtPath:]
-[PKFolderArchive closeArchive]
-[PKFolderArchive(Writing) initForWritingToPath:error:]
-[PKFolderArchive(Writing) setData:forPath:compressed:]
-[PKFolderArchive(Writing) setFile:forPath:compressed:]
-[PKFolderArchive(Writing) setContentsOfArchive:forPath:]
-[PKFolderArchive(SignedArchive) archiveSignatures]
-[PKFolderArchiveSignature initWithArchiveAtPath:]
-[PKFolderArchiveSignature dealloc]
-[PKFolderArchiveSignature certificateRefs]
-[PKFolderArchiveSignature algorithmType]
-[PKFolderArchiveSignature signedDataReturningAlgorithm:]
-[PKFolderArchiveSignature signatureDataReturningAlgorithm:]
-[PKFolderArchiveSignature verifyCodeSignatureIncludingSealedResources:error:]
-[PKFolderArchiveSignature verifySignedDataReturningError:]
-[XARDirectoryEnumerator _seekToSubpath:]
-[XARDirectoryEnumerator initWithXAR:subpath:]
-[XARDirectoryEnumerator finalize]
-[XARDirectoryEnumerator dealloc]
-[XARDirectoryEnumerator xar_file]
-[XARDirectoryEnumerator _next_file]
-[XARDirectoryEnumerator nextObject]
-[XARDirectoryEnumerator skipDescendants]
-[XARDirectoryEnumerator skipDescendents]
-[XARDirectoryEnumerator isDirectory]
-[PKXARArchive initForReadingFromPath:]
-[PKXARArchive finalize]
-[PKXARArchive dealloc]
-[PKXARArchive _setSkipsVerifyIfUnsigned:]
-[PKXARArchive archivePath]
-[PKXARArchive archiveDigest]
-[PKXARArchive closeArchive]
-[PKXARArchive _xar]
-[PKXARArchive _xarFileIsValid:]
-[PKXARArchive _fileStructForSubpath:error:]
-[PKXARArchive enumeratorAtPath:]
-[PKXARArchive dataForPath:]
-[PKXARArchive _extractFile:toPath:error:]
+[PKXARArchive _fileAttributeKeyForXARPropertyName:]
+[PKXARArchive _fileAttributeKeyForXARFileType:]
+[PKXARArchive _fileAttributeForXARProperty:fileAttributeKey:]
-[PKXARArchive fileAttributesAtPath:]
-[PKXARArchive verifyReturningError:]
-[PKXARArchive fileExistsAtPath:]
-[PKXARArchive _fileOffsetForPath:error:]
-[PKXARArchive __openOrVerifyErrorForArchiveEntry:]
-[PKMutableXARArchive initForWritingToPath:error:]
-[PKMutableXARArchive dealloc]
-[PKMutableXARArchive closeArchive]
-[PKMutableXARArchive _fileStructForParentOfSubpath:error:]
-[PKMutableXARArchive setData:forPath:compressed:]
-[PKMutableXARArchive setFile:forPath:compressed:]
-[PKMutableXARArchive setContentsOfArchive:forPath:]
-[PKXARArchive(SignedArchive) archiveSignatures]
-[PKXARArchive(SignedArchive) archiveSignatureDate]
-[PKMutableXARArchive(SignedArchive) addSignatureBySigningWithIdentity:algorithm:usingTSAIfSupported:]
_PKXARArchiveSignerCallback
-[PKMutableXARArchive(SignedArchive) addIntermediateCertificate:]
-[PKMutableXARArchive(SignedArchive) setSignatureSize:]
-[PKXARArchiveSignature initWithXARSignature:]
-[PKXARArchiveSignature certificateRefs]
-[PKXARArchiveSignature algorithmType]
-[PKXARArchiveSignature signedDataReturningAlgorithm:]
-[PKXARArchiveSignature signatureDataReturningAlgorithm:]
-[PKXARArchiveSignature _hasSigningCertificate:]
-[PKInstall initWithRequest:delegate:error:]
-[PKInstall finalize]
-[PKInstall dealloc]
-[PKInstall _startWithQualityOfServiceClass:]
___45-[PKInstall _startWithQualityOfServiceClass:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKInstall start]
-[PKInstall cancel]
-[PKInstall canCancel]
-[PKInstall isDone]
-[PKInstall estimatedTimeRemaining]
-[PKInstall progressValue]
-[PKInstall installState]
-[PKInstall _currentPackageSpecifier]
-[PKInstall error]
-[PKInstall request]
-[PKInstall registrationPaths]
-[PKInstall _installMain:]
-[PKInstall _installController]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___31-[PKInstall _installController]_block_invoke
___copy_helper_block_178
___destroy_helper_block_179
-[PKInstall _setInstallController:]
___35-[PKInstall _setInstallController:]_block_invoke
___copy_helper_block_182
___destroy_helper_block_183
-[PKInstall _releaseResources]
-[PKInstall _handleCanCancelDidChange:]
-[PKInstallSandbox initWithSandboxPath:installRequest:error:]
-[PKInstallSandbox initWithCoder:]
-[PKInstallSandbox encodeWithCoder:]
-[PKInstallSandbox dealloc]
-[PKInstallSandbox description]
-[PKInstallSandbox installRequest]
-[PKInstallSandbox setInstallRequest:]
-[PKInstallSandbox _createDirectory:uniquifying:error:]
-[PKInstallSandbox bomPathForPackageSpecifier:]
-[PKInstallSandbox restrictedRootManifestPathForPackageSpecifier:]
-[PKInstallSandbox prepareForCommitReturningError:]
-[PKInstallSandbox scriptsDirectoryForPackageSpecifier:]
-[PKInstallSandbox sandboxPath]
-[PKInstallSandbox setSandboxPath:]
-[PKInstallSandbox payloadDirectory]
-[PKInstallSandbox temporaryDirectoryForScripts]
-[PKInstallSandbox wasStaged]
-[PKInstallSandbox secureTemporaryDirectoryPath]
-[PKInstallSandbox createSecureTemporaryDirectoryForScript]
-[PKInstallSandbox trashcanPath]
-[PKInstallSandbox extraCleanupPaths]
-[PKInstallSandbox stagedSize]
-[PKInstallSandbox setStagedSize:]
-[PKInstallSandbox stageDate]
-[PKInstallSandbox setStageDate:]
-[PKInstallSandbox relevance]
-[PKInstallSandbox setRelevance:]
+[PKInstallError localizedDescriptionForCode:]
+[PKInstallError errorWithCode:package:userInfo:]
+[PKInstallError errorWithCode:userInfo:]
+[PKInstallRequest requestWithPackages:destination:]
-[PKInstallRequest initWithPackages:destination:]
-[PKInstallRequest init]
-[PKInstallRequest _initWithPackages:destination:]
-[PKInstallRequest initWithCoder:]
-[PKInstallRequest encodeWithCoder:]
-[PKInstallRequest replacementObjectForPortCoder:]
+[PKInstallRequest supportsSecureCoding]
-[PKInstallRequest finalize]
-[PKInstallRequest dealloc]
-[PKInstallRequest isEqual:]
-[PKInstallRequest _isDeeplyEqualToRequest:]
-[PKInstallRequest _checkChildIntegrityForDO]
-[PKInstallRequest description]
-[PKInstallRequest packages]
-[PKInstallRequest packageSpecifiers]
-[PKInstallRequest removePackageSpecifiers:]
-[PKInstallRequest _installItems]
-[PKInstallRequest _loggingIdentifier]
-[PKInstallRequest _setLoggingIdentifier:]
-[PKInstallRequest _setIsStageRequest:]
-[PKInstallRequest _isStageRequest]
-[PKInstallRequest _setUseForegroundPriorityForStaging:]
-[PKInstallRequest _useForegroundPriorityForStaging]
-[PKInstallRequest _clientProcessName]
-[PKInstallRequest _setIsOSInstall:]
-[PKInstallRequest _isOSInstall]
-[PKInstallRequest _setInstallSandboxName:]
-[PKInstallRequest _installSandboxName]
-[PKInstallRequest _untrustedEnvironment]
-[PKInstallRequest _setUntrustedEnvironment:]
-[PKInstallRequest _clientBootstrapPort]
-[PKInstallRequest _setClientBootstrapPort:]
-[PKInstallRequest _clientSecuritySessionPort]
-[PKInstallRequest _setClientSecuritySessionPort:]
-[PKInstallRequest _clientUID]
-[PKInstallRequest _clientGID]
-[PKInstallRequest _setClientUID:andGID:]
-[PKInstallRequest _scriptTargetVolume]
-[PKInstallRequest _setScriptTargetVolume:]
-[PKInstallRequest _masterBOMPath]
-[PKInstallRequest _setMasterBOMPath:]
-[PKInstallRequest _setSkipsVerifyOnUnsignedPackages:]
-[PKInstallRequest _useOpenScriptsDirectory]
-[PKInstallRequest _setUseOpenScriptsDirectory:]
-[PKInstallRequest _ignoreIndexBom]
-[PKInstallRequest _setIgnoreIndexBom:]
-[PKInstallRequest _setExtractionSpeed:]
-[PKInstallRequest _extractionSpeed]
-[PKInstallRequest _useHFSPlusCompressionByDefault]
-[PKInstallRequest _setUseHFSPlusCompressionByDefault:]
-[PKInstallRequest _internalBundleVersionChecking]
-[PKInstallRequest _setInternalBundleVersionChecking:]
-[PKInstallRequest _isRecursive]
-[PKInstallRequest _setIsRecursive:]
-[PKInstallRequest _appStoreReceiptData]
-[PKInstallRequest _setAppStoreReceiptData:]
-[PKInstallRequest _restartAction]
-[PKInstallRequest _setRestartAction:]
-[PKInstallRequest _spaceRequiredForInstall]
-[PKInstallRequest _setSpaceRequiredForInstall:]
-[PKInstallRequest _clientBlocksRestart]
-[PKInstallRequest _setClientBlocksRestart:]
-[PKInstallRequest _appPlaceholderPath]
-[PKInstallRequest _setAppPlaceholderPath:]
-[PKInstallRequest _restrictedRootEnabled]
-[PKInstallRequest destinationPath]
-[PKInstallRequest setDestinationPath:]
-[PKInstallRequest(Authorization) _authorizationAsExternalData]
-[PKInstallRequest(Authorization) _externalFormDataForAuthorizationRef:]
-[PKInstallRequest(Authorization) _createAuthorizationRefWithExternalFormData:]
-[PKInstallRequest(Authorization) setAuthorization:]
-[PKInstallRequest(Authorization) setAuthorizationEnvironment:]
-[PKInstallRequest(Authorization) authorization]
-[PKInstallRequest(Authorization) _authLevel]
-[PKInstallRequest(Authorization) requiresAuthorization]
-[PKInstallRequest(Authorization) preauthorizeAllowingInteraction:]
-[PKInstallRequest(Authorization) authorizeForRight:allowingInteraction:]
-[PKInstallRequest(Authorization) _validateAuthorizationReturningAcquiredRights:]
-[PKInstallRequest(Authorization) _isRequestCompatibleWithRights:]
-[PKInstallRequest(Trust) _clearTrustEvaluation]
-[PKInstallRequest(Trust) _updateWithSingleTrustLevel:certificateChain:trust:]
-[PKInstallRequest(Trust) setMinimumRequiredTrustLevel:]
-[PKInstallRequest(Trust) _evaluateTrustForPackage:verifyingPayload:returningError:]
-[PKInstallRequest(Trust) evaluateTrustReturningError:]
-[PKInstallRequest(Trust) trustLevelReturningCertificateChain:]
-[PKInstallRequest(Trust) trustLevelReturningTrustRef:]
-[PKInstallRequest(SoftwareUpdateStaging) _validAttributesForSoftwareUpdate:]
-[PKInstallRequest(SoftwareUpdateStaging) _isRequestFromSoftwareUpdate]
-[PKInstallRequest(SoftwareUpdateStaging) _isRequestFromMacAppStore]
-[PKInstallRequest(SoftwareUpdateStaging) _isValidAppStoreRequest:]
-[PKInstallRequest(SoftwareUpdateStaging) _hasValidInstallPathForAnyIAPContent]
-[PKInstallRequest(Preflight) checkLocalPackagesReturningError:]
-[PKInstallRequest(Preflight) _resolveInstallPathsReplacingPriorResults:]
-[PKInstallRequest(Preflight) totalSizeRequired]
-[PKInstallRequest(Preflight) performPreflightCheckReturningError:]
-[PKInstallRequest(Preflight) _canInstallPackageSpecifier:error:]
-[PKInstallRequest(Preflight) _performPreflightCheckIncludingSizing:error:]
-[PKInstallRequest(Preflight) didPassPreflightCheck]
__DebugPathDescription
__RelinkFile
__CheckForAndFixCircularDirectoryLink
__IsEmptyDirectory
-[PKBOM initWithBOMPath:]
-[PKBOM initWithBOMData:]
-[PKBOM finalize]
-[PKBOM dealloc]
-[PKBOM BOMBom]
+[PKBOM _NSFileTypeFromBOMFSObjType:]
+[PKBOM _attributesOfBOMFSObject:]
+[PKBOM _setAttributes:ofBOMFSObject:]
-[PKBOM attributesOfItemAtPath:]
__BOMFSObjectFromPathString
-[PKBOM directoryEnumerator]
-[PKBOM subpathsOfDirectoryAtPath:]
__PathStringFromBOMFSObject
-[PKBOM fileCount]
-[PKBOM totalSize]
-[PKMutableBOM initForWritingToPath:]
-[PKMutableBOM _newBOMPatternList:]
-[PKMutableBOM initWithDirectory:writingToPath:includeACLs:maskPatterns:]
-[PKMutableBOM addBomPath:fileType:]
-[PKMutableBOM addFile:forBomPath:includeACLs:]
-[PKMutableBOM setAttributes:ofItemAtPath:]
-[PKMutableBOM commitData]
-[PKMutableBOM _needAppleDoubleForPath:includeACLs:]
-[PKMutableBOM _addAppleDoubleForFile:forBOMPath:]
-[PKMutableBOM _addAppleDoubleAsNeededForForDirectory:includeACLs:]
-[PKBOMDirectoryEnumerator initWithBOM:]
-[PKBOMDirectoryEnumerator finalize]
-[PKBOMDirectoryEnumerator dealloc]
-[PKBOMDirectoryEnumerator nextObject]
-[PKBOMDirectoryEnumerator skipDescendants]
-[PKBOMDirectoryEnumerator skipDescendents]
-[PKBOMDirectoryEnumerator isDirectory]
-[PKBOMDirectoryEnumerator fileAttributes]
-[PKComponent initWithIdentifier:version:]
-[PKComponent dealloc]
-[PKComponent componentKey]
-[PKComponent description]
-[PKComponent setPackage:]
-[PKComponent setDestinationPath:]
-[PKComponent scriptForType:]
-[PKComponent setScript:forType:]
-[PKComponent hash]
-[PKComponent isEqual:]
-[PKComponent compare:]
-[PKComponent versionCompare:]
-[PKComponent identifier]
-[PKComponent setIdentifier:]
-[PKComponent version]
-[PKComponent setVersion:]
-[PKComponent prefixPath]
-[PKComponent setPrefixPath:]
-[PKComponent relocatable]
-[PKComponent setRelocatable:]
-[PKComponent versionChecked]
-[PKComponent setVersionChecked:]
-[PKComponent strictIdentifier]
-[PKComponent setStrictIdentifier:]
-[PKComponent subpaths]
-[PKComponent setSubpaths:]
-[PKComponent package]
-[PKComponent destinationPath]
-[PKBundleComponent initWithIdentifier:versionAttributes:bundlePath:]
-[PKBundleComponent initWithIdentifier:versionAttributes:bundlePath:storageType:]
-[PKBundleComponent initWithBundleAtPath:relativeToDestination:]
-[PKBundleComponent dealloc]
-[PKBundleComponent bundleVersion]
-[PKBundleComponent versionCompare:]
-[PKBundleComponent prefixPath]
-[PKBundleComponent subpaths]
-[PKBundleComponent storageType]
-[PKBundleComponent bundlePath]
-[PKBundleComponent bundleName]
-[PKBundleComponent overwriteAction]
-[PKBundleComponent setOverwriteAction:]
+[PKComponent(InstalledComponents) findComponentsWithIdentifier:destination:]
+[PKComponent(InstalledComponents) findComponentsWithIdentifier:version:destination:]
+[PKComponent(InstalledComponents) isInstallablePath:]
+[PKBundleComponent(ComponentInferencing) enumerateBundleComponentsUnderRoot:usingBlock:]
-[PKComponent(FileElementTurds) _deferredInstallPaths]
-[PKComponent(FileElementTurds) _pathToPatchInfoDictionary]
-[PKComponent(FileElementTurds) _pathToRequiredFilesDictionary]
-[PKComponent(FileElementTurds) _doNotObsoletePaths]
-[PKComponent(FileElementTurds) _doNotObsoletePrefixes]
-[PKComponent(Private) _scriptsDictionary]
+[PKComponent(Private) _componentPath:matchesDestination:]
+[PKComponent(Private) _bundleAtPath:matchesVersion:]
+[PKComponent(Private) _findComponentViaLaunchServicesWithIdentifier:version:destination:]
+[PKComponent(Private) _findComponentsViaSpotlightWithIdentifier:version:destination:]
-[PKBundleComponent(Private) _bundle]
+[PKBundleComponent(Private) _enumerateBundleComponentsUnderURL:relativeToRoot:parentComponent:usingBlock:]
+[PKJaguarPackage canInitWithURL:]
-[PKJaguarPackage initWithURL:]
-[PKJaguarPackage dealloc]
-[PKJaguarPackage copyWithZone:]
-[PKJaguarPackage _scriptsDirectory]
-[PKJaguarPackage _preflightScriptPath]
-[PKJaguarPackage _postflightScriptPath]
-[PKJaguarPackage _preupgradeScriptPath]
-[PKJaguarPackage _postupgradeScriptPath]
-[PKJaguarPackage _resourceRelativePathForScript:]
+[PKJaguarPackage _payloadForPackagePath:]
+[PKJaguarPackage _isArchiveSupported:]
-[PKJaguarPackage BOMData]
-[PKJaguarPackage restrictedRootManifestData]
-[PKJaguarPackage payloadExtractorWithDestination:externalRoot:error:]
-[PKJaguarPackage _parseHintsFile:]
-[PKLeopardPackage _archiveSubpathWithFileName:]
-[PKLeopardPackage initWithURL:]
-[PKLeopardPackage BOMData]
-[PKLeopardPackage restrictedRootManifestData]
-[PKLeopardPackage payloadExtractorWithDestination:externalRoot:error:]
-[PKLeopardPackage scriptsSubpath]
-[PKLeopardPackage scriptsExtractorWithDestination:error:]
-[PKMutableLeopardPackage setComponents:]
-[PKMutableLeopardPackage setPayloadRoot:]
-[PKMutableLeopardPackage setBaselinePayloadRoot:]
-[PKMutableLeopardPackage setMapBaselineNamesUsingBlock:]
-[PKMutableLeopardPackage setScriptRoot:]
-[PKMutableLeopardPackage setMaskExpressions:]
-[PKMutableLeopardPackage setModifyOwnershipUsingBlock:]
-[PKMutableLeopardPackage _writeToArchive:atPath:error:]
+[PKPackage _allPackageClasses]
+[PKPackage packageWithPath:]
+[PKPackage packageWithURL:]
-[PKPackage initWithCoder:]
-[PKPackage encodeWithCoder:]
-[PKPackage replacementObjectForPortCoder:]
-[PKPackage copyWithZone:]
-[PKPackage dealloc]
-[PKPackage description]
-[PKPackage hash]
-[PKPackage isEqual:]
-[PKPackage packageIdentifier]
-[PKPackage packageVersion]
-[PKPackage packageInfo]
-[PKPackage _scriptsDirectory]
-[PKPackage scriptsSubpath]
-[PKPackage scriptsExtractorWithDestination:error:]
-[PKPackage payloadExtractorWithDestination:externalRoot:error:]
-[PKPackage directoryEnumerator]
-[PKPackage _componentMap]
-[PKPackage components]
-[PKPackage componentForIdentifier:]
-[PKPackage subpathsForComponent:]
-[PKPackage archive]
-[PKPackage fileURL]
-[PKPackage _populateComponentSubpaths]
-[PKPackage enumerateBundleComponentsUsingBlock:]
-[PKMutablePackage initWithPackageInfo:ofType:]
-[PKMutablePackage dealloc]
-[PKMutablePackage _componentMap]
-[PKMutablePackage setComponents:]
-[PKMutablePackage setPayloadRoot:]
-[PKMutablePackage setScriptRoot:]
-[PKMutablePackage setMaskExpressions:]
-[PKMutablePackage setModifyOwnershipUsingBlock:]
-[PKMutablePackage writeToArchive:error:]
-[PKPackageInfo(Creation) _setBundleDefinitionsWithBundleAttributeDictionaries:]
-[PKPackageInfo(Creation) __setBundleIdentifiers:forDirective:]
-[PKPackageInfo(Creation) _setBundleIdentifiersForVersionChecking:]
-[PKPackageInfo(Creation) _setBundleIdentifiersForUpgrade:]
-[PKPackageInfo(Creation) _setBundleIdentifiersForUpdate:]
-[PKPackageInfo(Creation) _setBundleIdentifiersForAtomicUpdate:]
-[PKPackageInfo(Creation) _setBundleIdentifiersForStrict:]
-[PKPackageInfo(Creation) _setBundleIdentifiersAsRelocatable:]
-[PKPackageInfo(Creation) _setComponentScriptsWithComponents:]
-[PKPackageInfo(Creation) _setFileElementTurdsWithComponents:]
-[PKPackageInfo(Creation) _setDontObsoletePathsWithSet:]
+[PKMutableLeopardPackage(Creation) _bundleAttributeDictionaryForComponent:]
-[PKMutableLeopardPackage(Creation) _setComponents:]
-[PKMutableLeopardPackage(Creation) _updatePackageInfoWithComponents]
-[PKMutableLeopardPackage(Creation) _setPayloadRoot:]
-[PKMutableLeopardPackage(Creation) _setBaselinePayloadRoot:]
-[PKMutableLeopardPackage(Creation) _setMapBaselineNamesUsingBlock:]
-[PKMutableLeopardPackage(Creation) _setScriptRoot:]
-[PKMutableLeopardPackage(Creation) _setMaskExpressions:]
-[PKMutableLeopardPackage(Creation) _setModifyOwnershipUsingBlock:]
-[PKMutableLeopardPackage(Creation) _writeRoot:toCompressedCPIO:usingBom:error:]
-[PKMutableLeopardPackage(Creation) _generateBomPathToRealPathDictionaryWithDestinationPath:]
-[PKMutableLeopardPackage(Creation) _effectivePayloadRoot]
-[PKMutableLeopardPackage(Creation) _adjustOwnershipOnPath:inBom:usingBlock:]
-[PKMutableLeopardPackage(Creation) _writeBomToFile:error:modifyOwnershipUsingBlock:]
-[PKMutableLeopardPackage(Creation) _createUpdatePayloadAtPath:fromBaseline:toNew:currentPrefix:currentComponent:componentMap:tempDir:totalPayloadSize:didCreate:error:]
-[PKMutableLeopardPackage(Creation) _writePayloadToFile:usingBom:tempDir:error:]
-[PKMutableLeopardPackage(Creation) _writeScriptsToFile:error:]
-[_PKPackageCreationFileDigest initWithPath:]
-[_PKPackageCreationFileDigest dealloc]
-[_PKPackageCreationFileDigest digest]
+[PKPackage(ForSubclassers) canInitWithURL:]
-[PKPackage(ForSubclassers) initWithURL:]
-[PKPackage(ForSubclassers) BOMData]
-[PKPackage(ForSubclassers) restrictedRootManifestData]
-[PKMutablePackage(ForSubclassers) initWithPackageInfo:]
-[PKMutablePackage(ForSubclassers) _writeToArchive:atPath:error:]
-[PKMutablePackage(ForSubclassers) setBaselinePayloadRoot:]
-[PKMutablePackage(ForSubclassers) setMapBaselineNamesUsingBlock:]
-[PKPackageInfo _initWithXMLDocument:]
-[PKPackageInfo initWithData:]
-[PKPackageInfo initWithIdentifier:version:]
-[PKPackageInfo initWithIdentifier:]
-[PKPackageInfo dealloc]
-[PKPackageInfo XMLDocument]
-[PKPackageInfo valueForKey:]
-[PKPackageInfo setValue:forKey:]
-[PKPackageInfo(KVCAccessors) identifier]
-[PKPackageInfo(KVCAccessors) setIdentifier:]
-[PKPackageInfo(KVCAccessors) version]
-[PKPackageInfo(KVCAccessors) setVersion:]
-[PKPackageInfo(KVCAccessors) authLevel]
-[PKPackageInfo(KVCAccessors) setAuthLevel:]
-[PKPackageInfo(KVCAccessors) restartAction]
-[PKPackageInfo(KVCAccessors) setRestartAction:]
-[PKPackageInfo(KVCAccessors) installLocation]
-[PKPackageInfo(KVCAccessors) setInstallLocation:]
-[PKPackageInfo(KVCAccessors) updatePackage]
-[PKPackageInfo(KVCAccessors) setUpdatePackage:]
-[PKPackageInfo(KVCAccessors) generatorVersion]
-[PKPackageInfo(KVCAccessors) setGeneratorVersion:]
-[PKPackageInfo(KVCAccessors) minimumSystemVersion]
-[PKPackageInfo(KVCAccessors) setMinimumSystemVersion:]
-[PKPackageInfo(KVCAccessors) useHFSPlusCompression]
-[PKPackageInfo(KVCAccessors) setUseHFSPlusCompression:]
-[PKPackageInfo(KVCAccessors) payloadExternalRoot]
-[PKPackageInfo(KVCAccessors) setPayloadExternalRoot:]
-[PKPackageInfo(KVCAccessors) payloadInstallSize]
-[PKPackageInfo(KVCAccessors) setPayloadInstallSize:]
-[PKPackageInfo(KVCAccessors) payloadFileCount]
-[PKPackageInfo(KVCAccessors) setPayloadFileCount:]
-[PKPackageInfo(KVCAccessors) updatePayloadSize]
-[PKPackageInfo(KVCAccessors) setUpdatePayloadSize:]
-[PKPackageInfo(KVCAccessors) isRootRestricted]
-[PKPackageInfo(KVCAccessors) setRootRestriction:]
-[PKPackageInfo(KVCAccessors) rootRestrictionManifestPath]
-[PKPackageInfo(KVCAccessors) setRootRestrictionManifestPath:]
-[PKPackageInfo(KVCAccessors) _lastElementForScriptName:componentIdentifier:createIfNeeded:]
-[PKPackageInfo(KVCAccessors) preinstallScriptPath]
-[PKPackageInfo(KVCAccessors) preInstallScriptPath]
-[PKPackageInfo(KVCAccessors) setPreinstallScriptPath:]
-[PKPackageInfo(KVCAccessors) setPreInstallScriptPath:]
-[PKPackageInfo(KVCAccessors) postinstallScriptPath]
-[PKPackageInfo(KVCAccessors) postInstallScriptPath]
-[PKPackageInfo(KVCAccessors) setPostinstallScriptPath:]
-[PKPackageInfo(KVCAccessors) setPostInstallScriptPath:]
-[PKPackageInfo(KVCAccessors) groups]
-[PKPackageInfo(KVCAccessors) setGroups:]
-[PKPackageInfo(PrivateKVOAccessors) overwritePermissions]
-[PKPackageInfo(PrivateKVOAccessors) setOverwritePermissions:]
-[PKPackageInfo(PrivateKVOAccessors) allowCustomInstallLocation]
-[PKPackageInfo(PrivateKVOAccessors) setAllowCustomInstallLocation:]
-[PKPackageInfo(PrivateKVOAccessors) deleteObsoleteLanguages]
-[PKPackageInfo(PrivateKVOAccessors) setDeleteObsoleteLanguages:]
-[PKPackageInfo(PrivateKVOAccessors) scriptsInvalidateReceipt]
-[PKPackageInfo(PrivateKVOAccessors) setScriptsInvalidateReceipt:]
-[PKPackageInfo(PrivateKVOAccessors) shouldVerifyArchiveExplicitly]
-[PKPackageInfo(PrivateKVOAccessors) setShouldVerifyArchiveExplicitly:]
-[PKPackageInfo(PrivateKVOAccessors) contentType]
-[PKPackageInfo(PrivateKVOAccessors) setContentType:]
-[PKPackageInfo(PrivateKVOAccessors) preserveExtAttrs]
-[PKPackageInfo(PrivateKVOAccessors) setPreserveExtAttrs:]
-[PKPackageInfo(PrivateKVOAccessors) preserveACLs]
-[PKPackageInfo(PrivateKVOAccessors) setPreserveACLs:]
-[PKPackageInfo(XMLElements) _rootElement]
-[PKPackageInfo(XMLElements) _topLevelBundleXMLElements]
-[PKPackageInfo(XMLElements) _bundleVersionBundleXMLElements]
-[PKPackageInfo(XMLElements) _bundleUpgradeBundleXMLElements]
-[PKPackageInfo(XMLElements) _bundleUpdateBundleXMLElements]
-[PKPackageInfo(XMLElements) _bundleAtomicUpdateBundleXMLElements]
-[PKPackageInfo(XMLElements) _strictIdentifierBundleXMLElements]
-[PKPackageInfo(XMLElements) _relocateBundleXMLElements]
-[PKPackageInfo(XMLElements) _patchXMLElement]
-[PKPackageInfo(XMLElements) _requiredFilesXMLElement]
-[PKPackageInfo(XMLElements) _deferredInstallXMLElement]
-[PKPackageInfo(XMLElements) _dontObsoleteXMLElement]
-[PKPackageInfo(DeferredInstall) _deferredInstallScriptPath]
-[PKPackageInfo(DeferredInstall) _setDeferredInstallScriptPath:]
+[PKPackageInfo(Components) _bundleIdentifierFromBundleElement:]
-[PKPackageInfo(Components) _bundlePathFromBundleElement:]
-[PKPackageInfo(Components) _looseComponentIdentifier]
-[PKPackageInfo(Components) _generatedIdentifierForBundlePath:]
-[PKPackageInfo(Components) _coalescedBundleElementsFromElements:withParentElement:bundleIdentifierToBundleElementMap:]
-[PKPackageInfo(Components) _coalescedBundleElements]
-[PKPackageInfo(Components) _parseBundleElements:intoComponentMap:withPackage:]
-[PKPackageInfo(Components) _parseBundleDirectiveElementsWithComponentMap:]
-[PKPackageInfo(Components) _parseRelocateElementsWithComponentMap:]
-[PKPackageInfo(Components) __parseFileElement:container:component:]
-[PKPackageInfo(Components) __bundlePathToExistingComponentMap:]
-[PKPackageInfo(Components) _parseFileContainerElement:container:componentMap:pathToComponentMap:]
-[PKPackageInfo(Components) _parseScriptsElementWithComponentMap:]
-[PKPackageInfo(Components) _identifierToComponentMapWithPackage:]
-[PKTrust initWithCertificates:usingAppleRoot:signatureDate:]
-[PKTrust initWithSecTrust:usingAppleRoot:signatureDate:]
-[PKTrust dealloc]
-[PKTrust trustRef]
-[PKTrust trustResult]
-[PKTrust trustLevel]
-[PKTrust evaluateTrustReturningError:]
-[PKTrust certificateChain]
+[PKTrust stringForTrustLevel:]
-[PKTrust _enterAppleRootMode]
-[PKTrust _restoreSystemTrustMode]
-[PKTrust _enterDateSignedMode]
-[PKTrust _restoreCurrentDateMode]
-[PKTrust _setCurrentPolicyWithOID:]
-[PKTrust _evaluateTrustAtLevel:isDevelopmentSigned:]
-[PKTrust _anchorCertificateFromEvaluation]
-[PKTrust _isTrustedAsRootCertificate:inDomain:]
-[NSData(DataHashingAdditions) _SHA1DigestData]
-[NSData(DataHashingAdditions) _SHA1DigestString]
-[NSData(DataHashingAdditions) _MD5DigestString]
-[NSString(BomPathAdditions) _stringByInsertingBomPathPrefix]
-[NSString(BomPathAdditions) _absoluteString]
-[NSString(BomPathAdditions) _absoluteStringByDeletingBomPathPrefix]
-[NSString(BomPathAdditions) _relativeString]
-[NSString(BomPathAdditions) _relativeStringByDeletingBomPathPrefix]
-[NSString(BomPathAdditions) _appleDoublePath]
-[NSString(BomPathAdditions) _isAppleDoublePath]
+[NSString(BomPathAdditions) _commonParentOfPaths:]
-[NSString(VolumePathAdditions) _volumePath]
-[NSString(VolumePathAdditions) _stringByDeletingVolumePath]
-[NSXMLElement(PKAdditions) _lastElementForName:createIfNeeded:]
-[NSXMLElement(PKAdditions) _elementsForName:identifier:]
___57-[NSXMLElement(PKAdditions) _elementsForName:identifier:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[NSXMLElement(PKAdditions) _attributeForName:ofAnyElementNamed:]
-[NSXMLElement(PKAdditions) _setString:forAttributeName:]
-[NSXMLElement(PKAdditions) _setBool:forAttributeName:]
-[NSXMLElement(PKAdditions) _attributesDictionary]
-[NSXMLElement(PKAdditions) _replaceAttributesAsDictionary:]
-[NSXMLElement(PKAdditions) _removeChildren:]
-[NSXMLElement(PKAdditions) _trimmedStringValue]
-[NSXMLElement(PKAdditions) _hasPureTextContent]
-[NSXMLElement(PKAdditions) _hasChildElements]
-[NSXMLElement(PKAdditions) _setStringValueAsCDATA:]
-[NSXMLNode(PKAdditions) _boolValue]
-[NSXMLNode(PKAdditions) _setBool:]
-[PKReceipt init]
-[PKReceipt dealloc]
-[PKReceipt initWithBOMPath:]
-[PKReceipt initWithBundlePkgPath:]
-[PKReceipt description]
-[PKReceipt packageIdentifier]
-[PKReceipt packageVersion]
-[PKReceipt installDate]
-[PKReceipt installProcessName]
-[PKReceipt installPrefixPath]
+[PKReceipt(LibraryReceipts) __findReceiptsFromBOMsDirectory:]
+[PKReceipt(LibraryReceipts) __findBundleReceiptsFromDirectory:]
+[PKReceipt(LibraryReceipts) _findReceiptsOnVolumeAtPath:]
___58+[PKReceipt(LibraryReceipts) _findReceiptsOnVolumeAtPath:]_block_invoke
+[PKReceipt(LibraryReceipts) _sharedReceiptsCache]
+[PKReceipt(LibraryReceipts) receiptsOnVolumeAtPath:]
+[PKReceipt(LibraryReceipts) receiptWithIdentifier:volume:]
+[PKReceipt(LibraryReceipts) receiptWithPackageFileName:volume:]
+[PKReceipt(LibraryReceipts) receiptsAtPath:]
-[PKMutableReceipt initWithPackageIdentifier:packageVersion:BOMData:]
-[PKMutableReceipt dealloc]
-[PKMutableReceipt _BOM]
-[PKMutableReceipt writeToDirectory:error:]
+[PKReceipt(Private) _receiptsDirectoryPathForDestination:]
+[PKReceipt(Private) _receiptsDirectoryPathForSandboxRoot:destination:]
+[PKReceipt(Private) _searchDirectoriesForBOMReceiptsOnDestination:returningSecureIndexes:]
+[PKReceipt(Private) _searchDirectoriesForBundleReceiptsOnDestination:]
-[PKReceipt(Private) packageGroups]
-[PKReceipt(Private) _setPackageGroups:]
-[PKReceipt(Private) _packageName]
-[PKReceipt(Private) _setPackageName:]
-[PKReceipt(Private) _setInstallProcessName:]
-[PKReceipt(Private) _setInstallPrefixPath:]
+[PKReceipt(Private) _receiptDictionaryPathFromBOMPath:]
-[PKReceipt(Private) receiptStoragePaths]
-[PKReceipt(Private) _BOM]
-[PKReceipt(Private) _freeBOM]
-[PKReceipt(Private) _directoryEnumerator]
-[PKReceipt(Private) _attributesOfItemAtPath:]
-[PKReceipt(Private) _SHA1ChecksumDataOfItemAtPath:]
-[PKReceipt(Private) _setSHA1ChecksumData:forItemAtPath:]
-[PKReceipt(Private) _ACLStringOfItemAtPath:]
-[PKReceipt(Private) _setACLString:forItemAtPath:]
-[PKReceipt(Private) _updateSHA1ChecksumOfItemAtPath:withFile:]
-[PKReceipt(Private) _updateACLsOfItemAtPath:withFile:]
-[PKReceipt(Private) _isSecure]
-[PKReceipt(Private) _setSecure:]
+[PKReceipt(CachedReceipts) _clearCache]
-[PKReceipt(ForInstallTools) _removeReceiptInDirectory:error:]
-[PKDistribution _initWithXMLDocument:error:]
-[PKDistribution init]
-[PKDistribution initWithContentsOfURL:error:]
-[PKDistribution initWithData:error:]
-[PKDistribution initWithCoder:]
-[PKDistribution encodeWithCoder:]
-[PKDistribution replacementObjectForPortCoder:]
-[PKDistribution copyWithZone:]
-[PKDistribution dealloc]
-[PKDistribution finalize]
-[PKDistribution distributionURL]
-[PKDistribution XMLData]
-[PKDistribution _setDistributionURL:]
+[PKDistribution maxSupportedSpecVersion]
-[PKDistribution _currentMinSpecVersionReturningSupportedOSVersion:]
-[PKDistribution _minSpecVersionAddingSupportedOSVersionIfNeeded:]
-[PKDistribution minSpecVersion]
-[PKDistribution setMinSpecVersion:]
+[PKDistribution _element:coalescedAttributesDictionaryWithChildrenNamed:]
-[PKDistribution _rootElement]
-[PKDistribution platformAttributesForType:]
-[PKDistribution setPlatformAttributes:forType:]
-[PKDistribution objectForSourceURI:returningAttributeName:]
-[PKDistribution productIdentifier]
-[PKDistribution productVersion]
-[PKDistribution setProductIdentifier:]
-[PKDistribution setProductVersion:]
-[PKDistribution _systemImageInformation]
-[PKDistribution _systemImagePackageReferences]
-[PKDistribution _setSystemImageInformation:]
-[PKDistribution _setSystemImagePackageReferences:]
-[PKDistribution titleKey]
-[PKDistribution setTitleKey:]
-[PKDistribution versionKey]
-[PKDistribution setVersionKey:]
-[PKDistribution resourceDataForKey:]
-[PKDistribution setResourceData:forKey:]
-[PKDistribution resourceAttributesForKey:]
-[PKDistribution setResourceAttributes:forKey:]
-[PKDistribution __cacheLineElements:]
-[PKDistribution _choicesByIdentifier]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___38-[PKDistribution _choicesByIdentifier]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKDistribution _didChangeChoice:originalIdentifier:]
___54-[PKDistribution _didChangeChoice:originalIdentifier:]_block_invoke
___copy_helper_block_269
___destroy_helper_block_270
-[PKDistribution _choicesOutlineElementForInterfaceType:creatingIfNeeded:]
-[PKDistribution interfaceTypes]
-[PKDistribution rootChoiceForInterfaceType:creatingIfNeeded:]
-[PKDistribution choiceForIdentifier:]
-[PKDistribution _verifyAndRepairChoiceTreeForInterfaceType:]
___61-[PKDistribution _verifyAndRepairChoiceTreeForInterfaceType:]_block_invoke
___copy_helper_block_286
___destroy_helper_block_287
-[PKDistribution _findIncorrectlyNestedChoicesUnder:addTo:]
-[PKDistribution _verifyAndRepairChoiceTreeWithReferencingElement:movedOrSynthesizedChoices:]
-[PKDistribution ioMatchingDictionary]
-[PKDistribution setIOMatchingDictionary:]
-[PKDistribution optionsDictionary]
-[PKDistribution setOptionsDictionary:]
-[PKDistribution tags]
-[PKDistribution setTags:]
-[PKDistribution auxInfoPropertyList]
-[PKDistribution setAuxInfoPropertyList:]
-[PKDistribution _scriptUnder:element:attribute:createIfNeeded:]
-[PKDistribution topScript]
-[PKDistribution installationCheckScript]
-[PKDistribution volumeCheckScript]
-[PKDistribution upgradeCheckScript]
-[PKDistribution peripheralCheckScript]
-[PKDistribution installationCheckScriptCreatingIfNeeded:]
-[PKDistribution requiredGigaBytesOfRAM]
-[PKDistribution setRequiredGigaBytesOfRAM:]
-[PKDistribution requiredHardwarePropertiesPredicate]
-[PKDistribution setRequiredHardwarePropertiesPredicate:]
-[PKDistribution _requiredGraphicsPredicateOfType:]
-[PKDistribution _setRequiredGraphicsPredicate:ofType:]
-[PKDistribution requiredGLRendererPredicate]
-[PKDistribution setRequiredGLRendererPredicate:]
-[PKDistribution requiredCLDevicePredicate]
-[PKDistribution setRequiredCLDevicePredicate:]
-[PKDistribution requireSingleGraphicsDevice]
-[PKDistribution setRequireSingleGraphicsDevice:]
-[PKDistribution descriptionOfRequiredGraphicsHardware]
-[PKDistribution setDescriptionOfRequiredGraphicsHardware:]
-[PKDistribution descriptionOfRequiredHardwareProperties]
-[PKDistribution setDescriptionOfRequiredHardwareProperties:]
-[PKDistribution volumeCheckScriptCreatingIfNeeded:]
-[PKDistribution upgradeCheckScriptCreatingIfNeeded:]
-[PKDistribution peripheralCheckScriptCreatingIfNeeded:]
-[PKDistribution supportedOSVersions]
-[PKDistribution setSupportedOSVersions:]
-[PKDistribution requiredBundleComponents]
-[PKDistribution requireAllBundleComponents]
-[PKDistribution descriptionOfRequiredBundleComponents]
-[PKDistribution setRequiredBundleComponents:requireAll:description:]
-[PKDistribution _futureSystemVersionDictionary]
-[PKDistribution __cachePkgRefElement:]
-[PKDistribution _pkgRefsByIdentifier]
___38-[PKDistribution _pkgRefsByIdentifier]_block_invoke
___38-[PKDistribution _pkgRefsByIdentifier]_block_invoke_2
___copy_helper_block_452
___destroy_helper_block_453
___copy_helper_block_459
___destroy_helper_block_460
-[PKDistribution _pkgRefsInOrder]
___33-[PKDistribution _pkgRefsInOrder]_block_invoke
___copy_helper_block_463
___destroy_helper_block_464
-[PKDistribution _didChangePkgRef:originalIdentifier:insertIndex:]
___66-[PKDistribution _didChangePkgRef:originalIdentifier:insertIndex:]_block_invoke
___copy_helper_block_471
___destroy_helper_block_472
-[PKDistribution countOfPackageReferences]
-[PKDistribution objectInPackageReferencesAtIndex:]
-[PKDistribution insertObject:inPackageReferencesAtIndex:]
-[PKDistribution removeObjectFromPackageReferencesAtIndex:]
___59-[PKDistribution removeObjectFromPackageReferencesAtIndex:]_block_invoke
-[PKDistribution packageReferenceForIdentifier:]
-[PKDistribution allPackageIdentifiers]
-[PKDistribution _choicesUsingPackageReference:]
-[PKDistribution _attributeNameForDomain:]
-[PKDistribution enabledValueForDomain:]
-[PKDistribution enabledScriptForDomain:creatingIfNeeded:]
-[PKDistribution setEnabledValue:forDomain:]
-[PKDistribution orderedSearchIdentifiers]
-[PKDistribution _searchAttributeDictionaryForSearchElement:]
-[PKDistribution searchAttributesForIdentifier:]
-[PKDistribution localizations]
-[PKDistribution _stringsElementForLocalization:]
-[PKDistribution stringsDictionaryForLocalization:]
-[PKDistribution setStringsDictionary:forLocalization:]
-[PKDistribution localizedStringForKey:value:]
+[PKDownloader userAgent]
+[PKDownloader setUserAgent:]
+[PKDownloader keyPathsForValuesAffectingEstimatedTimeRemaining]
+[PKDownloader automaticallyNotifiesObserversForKey:]
-[PKDownloader initWithDelegate:]
-[PKDownloader finalize]
-[PKDownloader dealloc]
-[PKDownloader description]
-[PKDownloader maxConcurrentDownloadCount]
-[PKDownloader setMaxConcurrentDownloadCount:]
-[PKDownloader queuePackageReference:destination:]
-[PKDownloader queueContainsPackageReference:]
-[PKDownloader startQueue]
-[PKDownloader stopQueue]
-[PKDownloader clearQueue]
-[PKDownloader isQueueRunning]
-[PKDownloader isQueueEmpty]
-[PKDownloader progressValue]
-[PKDownloader completedDownloadSize]
-[PKDownloader totalDownloadSize]
-[PKDownloader estimatedTimeRemaining]
-[PKDownloader setIsQueueRunning:]
-[PKDownloader _startUpdateTimer]
-[PKDownloader _stopUpdateTimer]
-[PKDownloader _startQueuedDownloads]
-[PKDownloader _startDownloadForQueueElement:]
-[PKDownloader _startFileCopyForQueueElement:]
-[PKDownloader _finishFileCopyWithResult:]
-[PKDownloader _startChecksumValidationForDownload:]
-[PKDownloader _startNativeValidationForDownload:]
-[PKDownloader _validatePackageAtPath:]
-[PKDownloader _validateDiskImageAtPath:]
-[PKDownloader _postProcessDownloadWithArgs:]
-[PKDownloader _cancelDownloadCapturingResumeData:]
-[PKDownloader _notifyDelegateIfQueueStopped:]
-[PKDownloader _updateIndicators:]
-[PKDownloader _updateProgressInfo]
-[PKDownloader _updateDownloadSpeed]
-[PKDownloader _elementDidFinish:]
-[PKDownloader _element:didFailWithError:]
-[PKDownloader _wantHTTPLogging]
-[PKDownloader(NSURLDownloadDelegate) download:didReceiveAuthenticationChallenge:]
-[PKDownloader(NSURLDownloadDelegate) download:didCancelAuthenticationChallenge:]
-[PKDownloader(NSURLDownloadDelegate) download:willSendRequest:redirectResponse:]
-[PKDownloader(NSURLDownloadDelegate) download:willResumeFromByte:]
-[PKDownloader(NSURLDownloadDelegate) download:didReceiveResponse:]
-[PKDownloader(NSURLDownloadDelegate) download:didReceiveDataOfLength:]
-[PKDownloader(NSURLDownloadDelegate) download:didCheckDataOfLength:]
-[PKDownloader(NSURLDownloadDelegate) downloadDidFinish:]
-[PKDownloader(NSURLDownloadDelegate) download:didFailWithError:]
-[PKDownloaderSpeedTracker init]
-[PKDownloaderSpeedTracker dealloc]
-[PKDownloaderSpeedTracker description]
-[PKDownloaderSpeedTracker averageBytesPerSecond]
-[PKDownloaderSpeedTracker setAverageBytesPerSecond:]
-[PKDownloaderSpeedTracker didGetBytes:]
-[PKDownloaderSpeedTracker updateSpeed]
-[PKDownloaderQueueElement initWithPackageReference:destination:]
-[PKDownloaderQueueElement dealloc]
-[PKDownloaderQueueElement description]
-[PKDownloaderQueueElement packageReference]
-[PKDownloaderQueueElement destination]
-[PKDownloaderQueueElement partialPath]
-[PKDownloaderQueueElement resumeDataPath]
-[PKDownloaderQueueElement download]
-[PKDownloaderQueueElement setDownload:]
-[PKDownloaderQueueElement _resetProgress]
-[PKDownloaderQueueElement downloadedBytes]
-[PKDownloaderQueueElement _addToDownloadedBytes:]
-[PKDownloaderQueueElement checksummedBytes]
-[PKDownloaderQueueElement _addToChecksummedBytes:]
-[PKDownloaderQueueElement _reportedProgress]
-[PKDownloaderQueueElement _getAndClearProgressIncrement]
-[PKDownloaderQueue init]
-[PKDownloaderQueue dealloc]
-[PKDownloaderQueue description]
-[PKDownloaderQueue maxConcurrentDownloadCount]
-[PKDownloaderQueue setMaxConcurrentDownloadCount:]
-[PKDownloaderQueue isEmpty]
-[PKDownloaderQueue activeElements]
-[PKDownloaderQueue allElements]
-[PKDownloaderQueue activateNextElement]
-[PKDownloaderQueue activeElementForURL:]
-[PKDownloaderQueue totalSizeQueued]
-[PKDownloaderQueue sizeDownloaded]
-[PKDownloaderQueue sizeToDownload]
-[PKDownloaderQueue sizeToCheck]
-[PKDownloaderQueue progressPercentage]
-[PKDownloaderQueue addElement:]
-[PKDownloaderQueue removeElement:didFinish:]
-[PKDownloaderQueue revertElement:keepActive:]
-[PKDownloaderQueue deactivateElement:]
-[PKDownloaderQueue clearAll]
-[PKDownloaderQueue gotDataOfLength:forElement:]
-[PKDownloaderQueue checkedDataOfLength:forElement:]
-[PKDownloaderQueue updateProgressInfo]
-[PKDownloaderQueue _adjustQueueSizeBy:]
-[PKPackageReference initWithDictionaryRepresentation:baseURL:]
-[PKPackageReference initWithURL:identifier:version:fileSize:MD5:]
-[PKPackageReference initWithURL:identifier:version:fileSize:MD5:digest:]
-[PKPackageReference dealloc]
-[PKPackageReference initWithCoder:]
-[PKPackageReference encodeWithCoder:]
-[PKPackageReference replacementObjectForPortCoder:]
-[PKPackageReference copyWithZone:]
-[PKPackageReference hash]
-[PKPackageReference isEqual:]
-[PKPackageReference description]
-[PKPackageReference dictionaryRepresentation]
-[PKPackageReference URL]
-[PKPackageReference identifier]
-[PKPackageReference version]
-[PKPackageReference fileSize]
-[PKPackageReference MD5]
-[PKPackageReference digest]
-[NSString(CompareAdditions) _numericCompare:]
+[PKPackageSourceManager defaultManager]
-[PKPackageSourceManager init]
-[PKPackageSourceManager dealloc]
-[PKPackageSourceManager description]
-[PKPackageSourceManager addSource:distance:]
-[PKPackageSourceManager removeSource:]
-[PKPackageSourceManager allPackageSources]
+[PKPackageSourceManager _packageReferences:matchingIdentifier:version:]
-[PKPackageSourceManager _sortedPackageReferencesMatchingIdentifier:version:]
-[PKPackageSourceManager _validSubsetOfPackageReferences:]
-[PKPackageSourceManager _nearestPackageReference:]
-[PKPackageSourceManager bestPackageReferenceMatchingIdentifier:version:]
-[PKPackageSourceManager distanceForPackageReference:]
-[PKPackageSourceManager invalidatePackageReference:reason:]
-[PKPackageSourceManager clearInvalidationList]
-[PKPackageSourceManager clearInvalidationListForReason:]
___57-[PKPackageSourceManager clearInvalidationListForReason:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKPackageSourceManager clearInvalidationForIdentifier:version:forReason:]
___75-[PKPackageSourceManager clearInvalidationForIdentifier:version:forReason:]_block_invoke
___copy_helper_block_111
___destroy_helper_block_112
-[PKPackageSourceManager restoreFromCoder:]
-[PKPackageSourceManager archiveToCoder:]
+[PKURLConnection setSharedAuthenticationHandler:]
+[PKURLConnection userAgent]
+[PKURLConnection setUserAgent:]
+[PKURLConnection didReceiveAuthenticationChallenge:]
___53+[PKURLConnection didReceiveAuthenticationChallenge:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
+[PKURLConnection finishAuthenticationChallenge:usingCredential:shouldContinue:]
+[PKURLConnection finishAuthenticationChallenge:usingCredential:]
+[PKURLConnection sendSynchronousRequest:returningResponse:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___66+[PKURLConnection sendSynchronousRequest:returningResponse:error:]_block_invoke
___copy_helper_block_34
___destroy_helper_block_35
+[PKURLConnection sendAsynchronousRequest:notifyOn:completionHandler:]
___70+[PKURLConnection sendAsynchronousRequest:notifyOn:completionHandler:]_block_invoke
___copy_helper_block_62
___destroy_helper_block_63
-[_PKURLConnectionDelegate initWithNotifyQueue:usingBlock:]
-[_PKURLConnectionDelegate dealloc]
-[_PKURLConnectionDelegate connection:willSendRequest:redirectResponse:]
-[_PKURLConnectionDelegate connection:canAuthenticateAgainstProtectionSpace:]
-[_PKURLConnectionDelegate connection:didReceiveAuthenticationChallenge:]
-[_PKURLConnectionDelegate connection:didCancelAuthenticationChallenge:]
-[_PKURLConnectionDelegate connection:didReceiveResponse:]
-[_PKURLConnectionDelegate connection:didReceiveData:]
-[_PKURLConnectionDelegate connectionDidFinishLoading:]
___55-[_PKURLConnectionDelegate connectionDidFinishLoading:]_block_invoke
___copy_helper_block_135
___destroy_helper_block_136
-[_PKURLConnectionDelegate connection:didFailWithError:]
___56-[_PKURLConnectionDelegate connection:didFailWithError:]_block_invoke
___copy_helper_block_141
___destroy_helper_block_142
-[_PKURLConnectionDelegate _wantHTTPLogging]
-[_PKURLConnectionDelegate response]
-[_PKURLConnectionDelegate setResponse:]
-[_PKURLConnectionDelegate data]
-[_PKURLConnectionDelegate setData:]
-[PKArchiveProduct _initWithPath:error:]
-[PKArchiveProduct dealloc]
-[PKArchiveProduct URL]
-[PKArchiveProduct productType]
-[PKArchiveProduct productIdentifier]
-[PKArchiveProduct productVersion]
-[PKArchiveProduct distribution]
-[PKArchiveProduct distributionContainer]
-[PKArchiveProduct stringsDictionary]
-[PKArchiveProduct localizedStringForKey:value:]
-[PKArchiveProduct allPackageReferences]
-[PKArchiveProduct _identifierVersionTuple:]
+[PKArchiveProduct(ForSubclassers) canInitWithURL:]
-[PKArchiveProduct(ForSubclassers) initByLoadingProductAtURL:error:]
-[PKArchiveProduct(ForSubclassers) _archiveForTrustEvaluation]
-[PKArchiveProduct(ForMutableSubclassers) initForWritingToArchive:signingDelegate:error:]
-[PKArchiveProduct(ForMutableSubclassers) setProductIdentifier:version:]
-[PKArchiveProduct(ForMutableSubclassers) setDistribution:]
-[PKArchiveProduct(ForMutableSubclassers) setDistributionFromContainer:]
-[PKArchiveProduct(ForMutableSubclassers) _setScriptsPath:]
-[PKArchiveProduct(ForMutableSubclassers) _setInstallerPluginsPath:]
-[PKArchiveProduct(ForMutableSubclassers) addResourceDataAtPath:]
-[PKArchiveProduct(ForMutableSubclassers) suggestedPackagePathFromPackageReference:]
-[PKArchiveProduct(ForMutableSubclassers) registerPackageReference:]
-[PKArchiveProduct(ForMutableSubclassers) unregisterPackageReference:deletePackage:]
-[PKArchiveProduct(ForMutableSubclassers) _writeCompressedCPIOForRoot:intoArchivePath:error:]
-[PKArchiveProduct(ForMutableSubclassers) commitReturningError:]
+[PKNetEnabledProduct productInfoFilename]
+[PKNetEnabledProduct _standardizedProductURL:]
-[PKNetEnabledProduct initByLoadingProductAtURL:error:]
-[PKNetEnabledProduct didReceiveData:fromDistributionURL:error:]
-[PKNetEnabledProduct dealloc]
-[PKNetEnabledProduct description]
-[PKNetEnabledProduct URL]
-[PKNetEnabledProduct productType]
-[PKNetEnabledProduct productIdentifier]
-[PKNetEnabledProduct productVersion]
-[PKNetEnabledProduct distribution]
-[PKNetEnabledProduct distributionContainer]
-[PKNetEnabledProduct _distributionFlatData]
-[PKNetEnabledProduct stringsDictionary]
-[PKNetEnabledProduct localizedStringForKey:value:]
-[PKNetEnabledProduct allPackageReferences]
-[PKNetEnabledProduct initForWritingAtPath:signingDelegate:error:]
-[PKNetEnabledProduct setProductIdentifier:version:]
-[PKNetEnabledProduct setDistribution:]
-[PKNetEnabledProduct setDistributionFromContainer:]
-[PKNetEnabledProduct _setDistributionFlatData:]
-[PKNetEnabledProduct addResourceDataAtPath:]
-[PKNetEnabledProduct _distributionWriteURLForLocalization:]
-[PKNetEnabledProduct _populateWithFlattenedDistributionsReturningError:]
-[PKNetEnabledProduct suggestedPackagePathFromPackageReference:]
-[PKNetEnabledProduct commitProductInfo]
-[PKNetEnabledProduct registerPackageReference:]
-[PKNetEnabledProduct unregisterPackageReference:deletePackage:]
-[PKNetEnabledProduct commitReturningError:]
-[PKProduct dealloc]
-[PKProduct finalize]
-[PKProduct URL]
-[PKProduct productType]
-[PKProduct productIdentifier]
-[PKProduct productVersion]
-[PKProduct setMinimumRequiredTrustLevel:]
-[PKProduct evaluateTrustReturningError:]
-[PKProduct trustLevelReturningCertificateChain:]
-[PKProduct trustLevelReturningTrustRef:]
-[PKProduct distribution]
-[PKProduct distributionContainer]
-[PKProduct stringsDictionary]
-[PKProduct localizedStringForKey:value:]
-[PKProduct resourceDataForKey:returningMIMEType:returningUTI:]
-[PKProduct allPackageReferences]
+[PKProduct(ForSubclassers) canInitWithURL:]
-[PKProduct(ForSubclassers) initByLoadingProductAtURL:error:]
-[PKProduct(ForSubclassers) _archiveForTrustEvaluation]
+[PKProduct(Loading) _allProductClasses]
+[PKProduct(Loading) productByLoadingProductAtURL:error:]
-[PKProduct(ForIFDocumentClients) _distributionArchivePath]
-[PKProduct(ForIFDocumentClients) _distributionFlatData]
+[PKProduct(ForIFDocumentClients) _allowsFolderArchives]
+[PKProduct(ForIFDocumentClients) _setAllowsFolderArchives:]
-[PKMutableProduct initForWritingToArchive:ofType:error:]
-[PKMutableProduct initForWritingToArchive:ofType:signingDelegate:error:]
-[PKMutableProduct setProductIdentifier:version:]
-[PKMutableProduct setDistribution:]
-[PKMutableProduct setDistributionFromContainer:]
-[PKMutableProduct addResourceDataAtPath:]
-[PKMutableProduct suggestedPackagePathFromPackageReference:]
-[PKMutableProduct registerPackageReference:]
-[PKMutableProduct unregisterPackageReference:deletePackage:]
-[PKMutableProduct writeProduct]
-[PKMutableProduct writeToArchive:error:]
-[PKMutableProduct commitReturningError:]
-[PKMutableProduct(ForIFDocumentClients) _initForWritingAtPath:ofType:error:]
-[PKMutableProduct(ForIFDocumentClients) _setDistributionArchiveFromPath:]
-[PKMutableProduct(ForIFDocumentClients) _setDistributionFlatData:]
-[PKMutableProduct(ForProductBuilder) _setScriptsPath:]
-[PKMutableProduct(ForProductBuilder) _setInstallerPluginsPath:]
-[PKProductInfo initWithDictionary:baseURL:]
-[PKProductInfo dealloc]
-[PKProductInfo productIdentifier]
-[PKProductInfo productVersion]
-[PKProductInfo _distributionsDictionary]
-[PKProductInfo localizations]
-[PKProductInfo distributionURLForLocalization:]
-[PKProductInfo preferredDistributionURL]
-[PKProductInfo packageReferences]
-[PKProductInfo dictionaryRepresentation]
-[PKProductInfo baseURL]
-[PKProductInfo(Mutable) init]
-[PKProductInfo(Mutable) setDistributionURL:forLocalization:]
-[PKProductInfo(Mutable) setPackageReferences:]
-[PKProductInfo(Mutable) setProductIdentifier:version:]
-[PKStreamingProduct initWithPath:resumptionOffset:error:]
-[PKStreamingProduct initWithPath:md5Hashes:hashedChunkSize:resumptionOffset:error:]
-[PKStreamingProduct dealloc]
-[PKStreamingProduct _updateCurrentArchiveStateWithError:]
-[PKStreamingProduct supplyBytes:withCompletionBlock:]
-[PKStreamingProduct suspendStreamWithCompletionBlock:]
-[PKStreamingProduct finishStreamWithCompletionBlock:]
-[PKStreamingProduct _isProductLoaded]
-[PKStreamingProduct _throwExceptionIfResourceNotLoaded:]
-[PKStreamingProduct URL]
-[PKStreamingProduct productType]
-[PKStreamingProduct productIdentifier]
-[PKStreamingProduct productVersion]
-[PKStreamingProduct setMinimumRequiredTrustLevel:]
-[PKStreamingProduct evaluateTrustReturningError:]
-[PKStreamingProduct trustLevelReturningCertificateChain:]
-[PKStreamingProduct trustLevelReturningTrustRef:]
-[PKStreamingProduct distribution]
-[PKStreamingProduct distributionContainer]
-[PKStreamingProduct stringsDictionary]
-[PKStreamingProduct localizedStringForKey:value:]
-[PKStreamingProduct resourceDataForKey:returningMIMEType:returningUTI:]
-[PKStreamingProduct allPackageReferences]
+[PKStreamingProduct canInitWithURL:]
-[PKStreamingProduct initByLoadingProductAtURL:error:]
-[PKStreamingProduct _archiveForTrustEvaluation]
-[PKStreamingProduct state]
-[PKStreamingProduct setState:]
-[PKStreamingProduct currentError]
-[PKStreamingProduct setCurrentError:]
-[PKInstallHistory initWithPath:]
-[PKInstallHistory dealloc]
+[PKInstallHistory defaultHistory]
-[PKInstallHistory addInstallRequest:]
-[PKInstallHistory installedItems]
+[PKInstallHistory(VeryPrivate) historyOnVolume:]
-[PKScript initWithPath:]
-[PKScript initWithPath:estimatedRunningTime:]
-[PKScript dealloc]
-[PKScript path]
-[PKScript setPath:]
-[PKScript estimatedRunningTime]
-[PKScript setEstimatedRunningTime:]
-[PKInstallTask initWithTask:logWithPrefix:]
-[PKInstallTask dealloc]
-[PKInstallTask task]
-[PKInstallTask run]
-[PKInstallTask _flushTaskOutput]
-[PKInstallTask _readTaskOutput:]
-[PKInstallTask _processTaskOutput:]
-[PKInstallAnalyzer initWithInstallRequest:]
-[PKInstallAnalyzer initWithInstallRequest:includeObsoletion:]
-[PKInstallAnalyzer dealloc]
-[PKInstallAnalyzer _analyzeIncludingObsoletion:]
-[PKInstallAnalyzer _sanitizePackageDataForRequest]
___51-[PKInstallAnalyzer _sanitizePackageDataForRequest]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKInstallAnalyzer maskPathsForPackageSpecifier:]
-[PKInstallAnalyzer skipComponentsForPackageSpecifier:]
-[PKInstallAnalyzer obsoletedFiles]
-[PKInstallAnalyzer potentiallyObsoleteDirectories]
-[PKInstallAnalyzer atomicallyObsoletePaths]
-[PKInstallAnalyzer deferredInstallPaths]
-[PKInstallAnalyzer bundlePathsForRegistration]
-[PKInstallAnalyzer bundlePathsForContentCaching]
-[PKInstallAnalyzer installsKexts]
-[PKInstallAnalyzer installsSystemLibraries]
-[PKInstallAnalyzer installsXPCCacheContent]
-[PKInstallAnalyzer extendedAttributesForComponent:]
-[PKInstallAnalyzer _isUnsafeToObsoleteComponent:]
-[PKInstallAnalyzer _shouldAllowReceiptBasedFileObsoletingForPackage:]
-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke
___copy_helper_block_146
___destroy_helper_block_147
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke153
___copy_helper_block_154
___destroy_helper_block_155
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke163
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke_2
___copy_helper_block_166
___destroy_helper_block_167
___copy_helper_block_173
___destroy_helper_block_174
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke179
___copy_helper_block_180
___destroy_helper_block_181
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke184
___copy_helper_block_185
___destroy_helper_block_186
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke189
___copy_helper_block_190
___destroy_helper_block_191
___79-[PKInstallAnalyzer _findObsoleteOnDiskFilesForPackageSpecifier:coreLanguages:]_block_invoke205
___copy_helper_block_234
___destroy_helper_block_235
+[PKInstallAnalyzer _coreLanguages]
-[PKInstallAnalyzer _coreLocsInstalledAtPath:withCoreLocs:returningOtherInstalledLocs:]
-[PKInstallAnalyzer _coreLocsToInstallAtResourcesPath:withCoreLocs:ofComponent:]
-[PKInstallAnalyzer _buildBundlePathToComponentMapForRequest]
-[PKInstallAnalyzer _versionPreviouslyDeferredForComponentAtPath:]
-[PKInstallAnalyzer _shouldInstallPackageComponent:forPackageSpecifier:]
-[PKInstallAnalyzer _findSkipComponentsForPackageSpecifier:]
___60-[PKInstallAnalyzer _findSkipComponentsForPackageSpecifier:]_block_invoke
___copy_helper_block_319
___destroy_helper_block_320
-[PKInstallAnalyzer _findDeferredInstallPathsForPackageSpecifier:]
-[PKInstallAnalyzer _findRegistrationPathsForPackageSpecifier:]
+[PKBundleComponentVersion bundleComponentVersionWithPackageAttributes:]
+[PKBundleComponentVersion bundleComponentVersionWithOnDiskBundle:]
-[PKBundleComponentVersion initWithShortVersionString:bundleVersion:sourceVersion:buildVersion:forOnDiskComponent:]
-[PKBundleComponentVersion initWithAttributes:forOnDiskComponent:]
-[PKBundleComponentVersion dealloc]
-[PKBundleComponentVersion description]
-[PKBundleComponentVersion compare:]
-[PKBundleComponentVersion shortVersionString]
-[PKBundleComponentVersion bundleVersion]
-[PKBundleComponentVersion sourceVersion]
-[PKBundleComponentVersion buildVersion]
-[PKBundleComponentVersion _isOnDiskComponent]
-[PKBundleComponentVersion attributeDictionary]
-[PKBundleComponentVersion combinedVersionString]
+[PKBundleComponentVersion _combinedVersionAndInfoDictionaryForBundle:]
+[PKBundleComponentVersion _standardizedTupleVersionString:]
+[PKBundleComponentVersion _orderedVersionKeys]
-[PKPackageRequirements initWithPackageIdentifier:destination:]
-[PKPackageRequirements dealloc]
-[PKPackageRequirements actualPathForComponentIdentifier:]
-[PKPackageRequirements setActualPath:forComponentIdentifier:]
-[PKPackageRequirements metForPackageInfo:returningError:]
-[PKPackageRequirements _metForPackageData:returningError:]
-[PKPackageRequirements currentDigestForFile:]
-[PKPackageRequirements _encodedDigestForOnDiskFile:]
-[PKPackageRequirements _checkDigestsForComponent:allPaths:]
_asl_set_objc
-[PKDistributionScript _initWithNode:]
-[PKDistributionScript _initWithNode:addToParent:]
-[PKDistributionScript _initWithExpression:]
-[PKDistributionScript dealloc]
-[PKDistributionScript description]
-[PKDistributionScript _setUseParentAsScriptParent:]
-[PKDistributionScript value]
-[PKDistributionScript _forIdentifier]
-[PKDistributionScript _scriptParent]
-[PKDistributionScript script]
-[PKDistributionScript attributeName]
-[PKDistributionScript _addToParentIfNeeded]
-[PKDistributionScript sourceURI]
-[PKDistributionScript setValue:]
-[PKDistributionScript setScript:]
-[PKDistributionScript sourceTextForEvaluation]
-[PKDistributionScript literalValue]
-[PKDistributionScript remove]
-[PKDistributionChoice _initWithDistribution:referencingElement:]
-[PKDistributionChoice init]
-[PKDistributionChoice dealloc]
-[PKDistributionChoice finalize]
-[PKDistributionChoice _validateChoice]
-[PKDistributionChoice description]
-[PKDistributionChoice identifier]
-[PKDistributionChoice setIdentifier:]
___38-[PKDistributionChoice setIdentifier:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKDistributionChoice validateIdentifier:error:]
-[PKDistributionChoice distribution]
-[PKDistributionChoice countOfChildren]
-[PKDistributionChoice objectInChildrenAtIndex:]
-[PKDistributionChoice insertObject:inChildrenAtIndex:]
___55-[PKDistributionChoice insertObject:inChildrenAtIndex:]_block_invoke
___copy_helper_block_119
___destroy_helper_block_120
-[PKDistributionChoice removeObjectFromChildrenAtIndex:]
___56-[PKDistributionChoice removeObjectFromChildrenAtIndex:]_block_invoke
-[PKDistributionChoice _pkgRefIdentifiers]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___42-[PKDistributionChoice _pkgRefIdentifiers]_block_invoke
___42-[PKDistributionChoice _pkgRefIdentifiers]_block_invoke_2
___42-[PKDistributionChoice _pkgRefIdentifiers]_block_invoke_3
___copy_helper_block_142
___destroy_helper_block_143
___copy_helper_block_146
___destroy_helper_block_147
___copy_helper_block_150
___destroy_helper_block_151
-[PKDistributionChoice _invalidatePkgRefIdentifiers]
___52-[PKDistributionChoice _invalidatePkgRefIdentifiers]_block_invoke
___copy_helper_block_157
___destroy_helper_block_158
-[PKDistributionChoice countOfPackageReferences]
-[PKDistributionChoice enumeratorOfPackageReferences]
___53-[PKDistributionChoice enumeratorOfPackageReferences]_block_invoke
___copy_helper_block_167
___destroy_helper_block_168
-[PKDistributionChoice memberOfPackageReferences:]
-[PKDistributionChoice addPackageReferencesObject:]
-[PKDistributionChoice removePackageReferencesObject:]
___54-[PKDistributionChoice removePackageReferencesObject:]_block_invoke
___copy_helper_block_183
___destroy_helper_block_184
___54-[PKDistributionChoice removePackageReferencesObject:]_block_invoke187
___copy_helper_block_190
___destroy_helper_block_191
___54-[PKDistributionChoice removePackageReferencesObject:]_block_invoke194
___copy_helper_block_197
___destroy_helper_block_198
-[PKDistributionChoice validatePackageReference:error:]
-[PKDistributionChoice packageIdentifiers]
-[PKDistributionChoice valueForAttributeName:]
___46-[PKDistributionChoice valueForAttributeName:]_block_invoke
___copy_helper_block_212
___destroy_helper_block_213
-[PKDistributionChoice setValue:forAttributeName:]
-[PKDistributionChoice scriptForAttributeName:]
-[PKDistributionChoice scriptForAttributeName:createIfNeeded:]
___62-[PKDistributionChoice scriptForAttributeName:createIfNeeded:]_block_invoke
___copy_helper_block_227
___destroy_helper_block_228
-[PKDistributionChoice valueForUndefinedKey:]
-[PKDistributionChoice setValue:forUndefinedKey:]
-[PKDistributionPackageReference init]
-[PKDistributionPackageReference _initWithDistribution:pkgRefIdentifier:]
-[PKDistributionPackageReference dealloc]
-[PKDistributionPackageReference isEqual:]
-[PKDistributionPackageReference hash]
-[PKDistributionPackageReference description]
-[PKDistributionPackageReference distribution]
-[PKDistributionPackageReference _setDistribution:]
-[PKDistributionPackageReference _addPkgRefElement:]
-[PKDistributionPackageReference _removePkgRefElement:]
-[PKDistributionPackageReference _pkgRefElements]
-[PKDistributionPackageReference _replacePkgRefIdentifier:]
-[PKDistributionPackageReference identifier]
-[PKDistributionPackageReference version]
-[PKDistributionPackageReference URL]
___37-[PKDistributionPackageReference URL]_block_invoke
-[PKDistributionPackageReference pkgRefIdentifier]
-[PKDistributionPackageReference setPkgRefIdentifier:]
___54-[PKDistributionPackageReference setPkgRefIdentifier:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKDistributionPackageReference validatePkgRefIdentifier:error:]
-[PKDistributionPackageReference packageIdentifier]
-[PKDistributionPackageReference setPackageIdentifier:]
-[PKDistributionPackageReference setURL:]
___41-[PKDistributionPackageReference setURL:]_block_invoke
-[PKDistributionPackageReference _pkgRefElementForWriting:passingBlock:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___72-[PKDistributionPackageReference _pkgRefElementForWriting:passingBlock:]_block_invoke
___copy_helper_block_113
___destroy_helper_block_114
-[PKDistributionPackageReference valueForAttributeName:]
___56-[PKDistributionPackageReference valueForAttributeName:]_block_invoke
___copy_helper_block_133
___destroy_helper_block_134
-[PKDistributionPackageReference setValue:forAttributeName:]
___60-[PKDistributionPackageReference setValue:forAttributeName:]_block_invoke
___copy_helper_block_143
___destroy_helper_block_144
___60-[PKDistributionPackageReference setValue:forAttributeName:]_block_invoke147
___copy_helper_block_148
___destroy_helper_block_149
-[PKDistributionPackageReference scriptForAttributeName:]
-[PKDistributionPackageReference scriptForAttributeName:createIfNeeded:]
___72-[PKDistributionPackageReference scriptForAttributeName:createIfNeeded:]_block_invoke
___copy_helper_block_154
___destroy_helper_block_155
___72-[PKDistributionPackageReference scriptForAttributeName:createIfNeeded:]_block_invoke163
___copy_helper_block_164
___destroy_helper_block_165
-[PKDistributionPackageReference attributesAsDictionary]
-[PKDistributionPackageReference valueForUndefinedKey:]
-[PKDistributionPackageReference setValue:forUndefinedKey:]
-[PKDistributionPackageReference _bundleVersionElementCreatingIfNeeded:]
___72-[PKDistributionPackageReference _bundleVersionElementCreatingIfNeeded:]_block_invoke
___72-[PKDistributionPackageReference _bundleVersionElementCreatingIfNeeded:]_block_invoke_2
-[PKDistributionPackageReference bundleComponents]
-[PKDistributionPackageReference setBundleComponents:]
-[PKDistributionPackageReference countOfMustCloseApps]
___54-[PKDistributionPackageReference countOfMustCloseApps]_block_invoke
-[PKDistributionPackageReference objectInMustCloseAppsAtIndex:]
___63-[PKDistributionPackageReference objectInMustCloseAppsAtIndex:]_block_invoke
-[PKDistributionPackageReference componentIdentifierToSearchIdentifierMap]
-[PKDistributionPackageReference _distNameFromExternalName:]
-[PKDistributionPackageReference _externalValueFromDistValue:forExternalName:]
-[PKDistributionPackageReference _distValueFromExternalValue:forExternalName:]
-[PKPackageSpecifier initWithPackageReference:]
-[PKPackageSpecifier initWithPackage:]
-[PKPackageSpecifier dealloc]
-[PKPackageSpecifier description]
-[PKPackageSpecifier isEqual:]
-[PKPackageSpecifier hash]
-[PKPackageSpecifier copyWithZone:]
-[PKPackageSpecifier initWithCoder:]
-[PKPackageSpecifier encodeWithCoder:]
+[PKPackageSpecifier supportsSecureCoding]
-[PKPackageSpecifier replacementObjectForPortCoder:]
-[PKPackageSpecifier _checkChildIntegrityForDO]
-[PKPackageSpecifier _initWithDictionaryRepresentation:]
-[PKPackageSpecifier _dictionaryRepresentation]
-[PKPackageSpecifier userPathForComponentIdentifier:]
-[PKPackageSpecifier setUserPath:forComponentIdentifier:]
-[PKPackageSpecifier setPackageReference:]
-[PKPackageSpecifier package]
-[PKPackageSpecifier setAuthLevel:]
-[PKPackageSpecifier _refersToSamePackage:]
-[PKPackageSpecifier _packageUniqueHash]
-[PKPackageSpecifier packageReference]
-[PKPackageSpecifier prefixPath]
-[PKPackageSpecifier setPrefixPath:]
-[PKPackageSpecifier authLevel]
-[PKPackageSpecifier displayName]
-[PKPackageSpecifier setDisplayName:]
-[PKPackageSpecifier displayVersion]
-[PKPackageSpecifier setDisplayVersion:]
-[PKPackageSpecifier options]
-[PKPackageSpecifier setOptions:]
-[PKPackageSpecifier externalRootPath]
-[PKPackageSpecifier setExternalRootPath:]
-[PKPackageSpecifier(PathResolution) _resolvedPrefixPathForPackage]
-[PKPackageSpecifier(PathResolution) _resolvedPrefixPathForPackageComponent:]
-[PKPackageSpecifier(Requirements) _requirements]
-[PKPackageSpecifier(RelocationResolution) _onDiskComponentForDestination:packageComponent:search:]
-[PKPackageSpecifier(RelocationResolution) _bundleHasOriginalName:]
-[PKPackageSpecifier(RelocationResolution) _resolveInstallPathsForDestination:replacingPriorResults:]
___101-[PKPackageSpecifier(RelocationResolution) _resolveInstallPathsForDestination:replacingPriorResults:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKPackageSpecifier(RelocationResolution) _defaultInstallPathForBundleComponent:]
-[PKPackageSpecifier(RelocationResolution) _actualInstallPathForBundleComponent:]
-[PKPackageSpecifier(RelocationResolution) _previousInstallPathForBundleComponent:]
-[PKPackageSpecifier(RelocationResolution) _adjustedSubpath:forPackageComponent:previous:]
+[PKPackageSpecifier(RelocationResolution) _adjustedSubpath:forPackageComponent:relocatedToPath:]
-[PKPackageSpecifier(InstallPathUniquing) __adjustedInstallPathForComponent:provisionalPath:destination:]
-[PKPackageSpecifier(InstallPathUniquing) __checkForApplicationConflictForComponent:provisionalPath:destination:]
-[PKPackageSpecifier(InstallPathUniquing) __uniquePathForBundle:]
-[PKDistributionContainer _initWithDistributionData:distributionURL:error:]
-[PKDistributionContainer initWithDistributionData:distributionURL:error:]
-[PKDistributionContainer initWithPath:error:]
-[PKDistributionContainer initWithArchive:error:]
-[PKDistributionContainer dealloc]
-[PKDistributionContainer distribution]
-[PKDistributionContainer stringsDictionary]
-[PKDistributionContainer localizedStringForKey:value:]
-[PKDistributionContainer _resourceDataForKey:]
-[PKDistributionContainer _resourceContentType:forKey:]
-[PKDistributionContainer resourceDataForKey:returningMIMEType:returningUTI:]
+[PKDistributionContainer _lprojSubpathsInDirectory:]
+[PKDistributionContainer localizationNamesAtPath:]
-[PKMutableDistributionContainer initForWritingToPath:]
-[PKMutableDistributionContainer initForWritingToArchive:]
-[PKMutableDistributionContainer setDistribution:]
-[PKMutableDistributionContainer setDistributionFromContainer:]
-[PKMutableDistributionContainer setStringsData:forLocalization:]
-[PKMutableDistributionContainer setResourceData:forKey:forLocalization:]
-[PKMutableDistributionContainer storeResourcesAtPath:forLocalization:]
-[PKMutableDistributionContainer commitReturningError:]
-[PKMutableDistributionContainer error]
-[PKMutableDistributionContainer setError:]
-[PKFlatDistributionContainer initWithPath:forWriting:error:]
-[PKFlatDistributionContainer dealloc]
-[PKFlatDistributionContainer stringsDictionary]
-[PKFlatDistributionContainer localizedStringForKey:value:]
-[PKFlatDistributionContainer _resourceDataForKey:]
-[PKFlatDistributionContainer setDistributionFromContainer:]
-[PKFlatDistributionContainer setStringsData:forLocalization:]
-[PKFlatDistributionContainer setResourceData:forKey:forLocalization:]
-[PKFlatDistributionContainer commitReturningError:]
-[PKArchiveDistributionContainer initWithArchive:forWriting:error:]
-[PKArchiveDistributionContainer dealloc]
-[PKArchiveDistributionContainer _lprojSubpathByName]
-[PKArchiveDistributionContainer stringsDictionary]
-[PKArchiveDistributionContainer localizedStringForKey:value:]
-[PKArchiveDistributionContainer _resourceDataForKey:]
-[PKArchiveDistributionContainer setDistributionFromContainer:]
-[PKArchiveDistributionContainer setStringsData:forLocalization:]
-[PKArchiveDistributionContainer setResourceData:forKey:forLocalization:]
-[PKArchiveDistributionContainer commitReturningError:]
+[PKSecureNetEnabledProduct productInfoFilename]
-[PKSecureNetEnabledProduct initByLoadingProductAtURL:error:]
-[PKSecureNetEnabledProduct dealloc]
-[PKSecureNetEnabledProduct finalize]
-[PKSecureNetEnabledProduct productType]
-[PKSecureNetEnabledProduct _archiveForTrustEvaluation]
-[PKSecureNetEnabledProduct _isDistributionArchiveInProductOnDisk:]
-[PKSecureNetEnabledProduct didReceiveData:fromDistributionURL:error:]
-[PKSecureNetEnabledProduct _distributionArchivePath]
-[PKSecureNetEnabledProduct _distributionArchiveWriteURL]
-[PKSecureNetEnabledProduct _populateWithDistributionArchiveReturningError:]
-[PKSecureNetEnabledProduct commitReturningError:]
-[PKSecureNetEnabledProduct _setDistributionArchiveFromPath:]
-[PKInstallOperationController initWithRequest:analyzer:]
-[PKInstallOperationController dealloc]
-[PKInstallOperationController finalize]
-[PKInstallOperationController description]
___43-[PKInstallOperationController description]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKInstallOperationController addPrepareOperationsIntoSandbox:]
-[PKInstallOperationController addStageOperationsIntoSandbox:inBackground:]
-[PKInstallOperationController addCommitOperationsFromSandbox:usingManager:]
-[PKInstallOperationController run]
___35-[PKInstallOperationController run]_block_invoke
___35-[PKInstallOperationController run]_block_invoke_2
___copy_helper_block_97
___destroy_helper_block_98
___copy_helper_block_103
___destroy_helper_block_104
-[PKInstallOperationController canCancel]
-[PKInstallOperationController cancel]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___38-[PKInstallOperationController cancel]_block_invoke
___copy_helper_block_113
___destroy_helper_block_114
-[PKInstallOperationController installState]
-[PKInstallOperationController estimatedTimeRemaining]
___54-[PKInstallOperationController estimatedTimeRemaining]_block_invoke
___copy_helper_block_126
___destroy_helper_block_127
-[PKInstallOperationController progressPercentage]
-[PKInstallOperationController currentPackage]
-[PKInstallOperationController currentPackageSpecifier]
-[PKInstallOperationController totalEstimatedTime]
-[PKInstallOperationController _enqueueOperation:]
___50-[PKInstallOperationController _enqueueOperation:]_block_invoke
___copy_helper_block_146
___destroy_helper_block_147
-[PKInstallOperationController _currentOperation]
___49-[PKInstallOperationController _currentOperation]_block_invoke
___copy_helper_block_150
___destroy_helper_block_151
-[PKInstallOperationController _isCancelled]
___44-[PKInstallOperationController _isCancelled]_block_invoke
___copy_helper_block_156
___destroy_helper_block_157
-[PKInstallOperationController _markEndOfCancellableOperations]
___63-[PKInstallOperationController _markEndOfCancellableOperations]_block_invoke
___copy_helper_block_162
___destroy_helper_block_163
+[PKInstallOperationController _verboseMode]
-[PKInstallOperationController error]
-[PKInstallOperationController setError:]
-[PKInstallOperation initWithRequest:sandbox:analyzer:]
-[PKInstallOperation dealloc]
-[PKInstallOperation description]
-[PKInstallOperation start]
-[PKInstallOperation estimatedTimeRemaining]
-[PKInstallOperation totalEstimatedTime]
-[PKInstallOperation setTotalEstimatedTime:]
-[PKInstallOperation installState]
-[PKInstallOperation currentPackage]
-[PKInstallOperation currentPackageSpecifier]
-[PKInstallOperation messageTracerDomain]
-[PKInstallOperation messageTracerComment]
-[PKInstallOperation messageTracerTernarySignature]
-[PKInstallOperation logResult:]
-[PKInstallOperation taskWithLaunchPath:arguments:currentDirectoryPath:logWithPrefix:]
-[PKInstallOperation request]
-[PKInstallOperation sandbox]
-[PKInstallOperation analyzer]
-[PKInstallOperation startDate]
-[PKInstallOperation error]
-[PKInstallOperation setError:]
-[PKInstallOperation(Debugging) completionSummary]
-[PKExtractInstallOperation initWithRequest:sandbox:analyzer:]
-[PKExtractInstallOperation dealloc]
-[PKExtractInstallOperation finalize]
-[PKExtractInstallOperation estimatedTimeRemaining]
-[PKExtractInstallOperation installState]
-[PKExtractInstallOperation currentPackageSpecifier]
-[PKExtractInstallOperation messageTracerDomain]
-[PKExtractInstallOperation messageTracerComment]
-[PKExtractInstallOperation _setActiveExtractor:]
___49-[PKExtractInstallOperation _setActiveExtractor:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKExtractInstallOperation _activeExtractor]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___45-[PKExtractInstallOperation _activeExtractor]_block_invoke
___copy_helper_block_39
___destroy_helper_block_40
-[PKExtractInstallOperation _extractBomForPackageSpecifier:error:]
-[PKExtractInstallOperation _extractRestrictredRootManifestForPackageSpecifier:error:]
-[PKExtractInstallOperation _extractScriptsForPackageSpecifier:error:]
-[PKExtractInstallOperation _extractPayloadForPackageSpecifier:error:]
-[PKExtractInstallOperation main]
-[PKExtractInstallOperation cancel]
-[PKRunPackageScriptInstallOperation initForScriptType:request:sandbox:analyzer:]
-[PKRunPackageScriptInstallOperation finalize]
-[PKRunPackageScriptInstallOperation dealloc]
-[PKRunPackageScriptInstallOperation description]
-[PKRunPackageScriptInstallOperation installState]
-[PKRunPackageScriptInstallOperation currentPackageSpecifier]
-[PKRunPackageScriptInstallOperation messageTracerDomain]
-[PKRunPackageScriptInstallOperation messageTracerComment]
+[PKRunPackageScriptInstallOperation _sanitizeEnvironment:]
-[PKRunPackageScriptInstallOperation _scriptTaskEnvironmentForPackage:destination:scriptName:]
-[PKRunPackageScriptInstallOperation _switchToUserContext]
-[PKRunPackageScriptInstallOperation _restoreContext]
-[PKRunPackageScriptInstallOperation _runPackageScript:packageSpecifier:component:scriptName:error:]
-[PKRunPackageScriptInstallOperation _scriptPathSelectorForPackage:returningScriptName:]
-[PKRunPackageScriptInstallOperation _shouldSkipScriptForPackageSpecifier:]
-[PKRunPackageScriptInstallOperation main]
-[PKPatchFilesInstallOperation installState]
-[PKPatchFilesInstallOperation currentPackageSpecifier]
-[PKPatchFilesInstallOperation createCompressionQueue]
-[PKPatchFilesInstallOperation isCompressionEnabledForCurrentPackage]
-[PKPatchFilesInstallOperation isBackwardsIncompatibleCompressionEnabledForCurrentPackage]
-[PKPatchFilesInstallOperation queueSandboxFileForCompression:]
-[PKPatchFilesInstallOperation finishCompressionQueue]
-[PKPatchFilesInstallOperation shouldPatchFileAtSubpath:inComponent:]
-[PKPatchFilesInstallOperation patchFileAtSubpath:inComponent:atSandboxPrefix:onDiskPrefix:withRequirements:error:]
-[PKPatchFilesInstallOperation applyPatchesForPackageSpecifier:error:]
-[PKPatchFilesInstallOperation main]
-[PKRelocateComponentsInstallOperation installState]
-[PKRelocateComponentsInstallOperation currentPackageSpecifier]
-[PKRelocateComponentsInstallOperation messageTracerDomain]
-[PKRelocateComponentsInstallOperation messageTracerComment]
-[PKRelocateComponentsInstallOperation messageTracerTernarySignature]
-[PKRelocateComponentsInstallOperation _moveRelocatedComponentsForPackageSpecifier:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___90-[PKRelocateComponentsInstallOperation _moveRelocatedComponentsForPackageSpecifier:error:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKRelocateComponentsInstallOperation _localizeParentFolderForBundleAtPath:]
-[PKRelocateComponentsInstallOperation main]
-[PKObsoletionInstallOperation installState]
-[PKObsoletionInstallOperation _shouldDeleteDirectoryAtPath:]
-[PKObsoletionInstallOperation _trashAtomicallyObsoleteBundlesReturningError:]
-[PKObsoletionInstallOperation _deleteObsoletePathsReturningError:]
-[PKObsoletionInstallOperation _removeAppPlaceholderReturningError:]
-[PKObsoletionInstallOperation main]
-[PKAddExtendedAttributesInstallOperation installState]
-[PKAddExtendedAttributesInstallOperation _applyAttributesForSepcifier:]
-[PKAddExtendedAttributesInstallOperation main]
-[PKDYLDCacheInstallOperation initWithRequest:sandbox:analyzer:updateInSandbox:]
-[PKDYLDCacheInstallOperation description]
-[PKDYLDCacheInstallOperation _shouldUpdateDYLDSharedCache]
-[PKDYLDCacheInstallOperation installState]
-[PKDYLDCacheInstallOperation _pathForTool:]
-[PKDYLDCacheInstallOperation _updateDYLDSharedCacheInSandboxReturningError:]
-[PKDYLDCacheInstallOperation main]
-[PKDYLDCacheInstallOperation cancel]
+[PKDYLDCacheInstallOperation canBackgroundForCurrentSystemState]
-[PKExtendedAttribute initWithName:value:]
-[PKExtendedAttribute dealloc]
-[PKExtendedAttribute description]
-[PKExtendedAttribute setOnFileAtPath:option:]
-[PKExtendedAttribute name]
-[PKExtendedAttribute setName:]
-[PKExtendedAttribute value]
-[PKExtendedAttribute setValue:]
-[PKSetupDeferredInstallOperation installState]
-[PKSetupDeferredInstallOperation _arrangeForDeferredInstallReturningError:]
-[PKSetupDeferredInstallOperation main]
-[PKShoveInstallOperation initWithRequest:sandbox:analyzer:]
-[PKShoveInstallOperation installState]
-[PKShoveInstallOperation messageTracerDomain]
-[PKShoveInstallOperation messageTracerComment]
-[PKShoveInstallOperation _moveActiveDYLDCacheIfNeeded]
-[PKShoveInstallOperation _shoveExtractedRootOntoDestinationReturningError:]
___76-[PKShoveInstallOperation _shoveExtractedRootOntoDestinationReturningError:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKShoveInstallOperation main]
-[PKKextCacheInstallOperation initWithRequest:sandbox:analyzer:]
-[PKKextCacheInstallOperation _shouldUpdateKextCaches]
-[PKKextCacheInstallOperation installState]
-[PKKextCacheInstallOperation _updateKextCachesReturningError:]
-[PKKextCacheInstallOperation main]
-[PKLSRegisterInstallOperation installState]
-[PKLSRegisterInstallOperation _registerLaunchServicesBundlesReturningError:]
-[PKLSRegisterInstallOperation main]
+[PKLSRegisterInstallOperation(ForInstallClient) registerWithLaunchServices:]
-[PKWriteReceiptsInstallOperation initWithRequest:sandbox:analyzer:writeInSandbox:]
-[PKWriteReceiptsInstallOperation installState]
-[PKWriteReceiptsInstallOperation currentPackageSpecifier]
-[PKWriteReceiptsInstallOperation messageTracerDomain]
-[PKWriteReceiptsInstallOperation messageTracerComment]
-[PKWriteReceiptsInstallOperation _shouldWriteReceiptForPackageSpecifier:]
-[PKWriteReceiptsInstallOperation _newMasterBOMIfEnabled]
-[PKWriteReceiptsInstallOperation _saveReceiptForPackageSpecifier:withMasterBOM:error:]
-[PKWriteReceiptsInstallOperation main]
+[PKDownload _downloadClasses]
+[PKDownload addDownloadClass:]
+[PKDownload canDownloadURL:]
+[PKDownload canDownloadWithResumeData:]
-[PKDownload initWithURL:delegate:]
-[PKDownload initWithResumeData:destination:delegate:]
+[PKDownload downloadWithURL:delegate:]
+[PKDownload downloadWithResumeData:destination:delegate:]
-[PKDownload cancel]
-[PKDownload sourcePath]
-[PKDownload sourceURL]
-[PKDownload resumeData]
-[PKDownload setDeletesFileUponFailure:]
-[PKDownload deletesFileUponFailure]
-[PKDownload setDestination:allowOverwrite:]
-[PKDownload validatesDuringDownload]
+[PKFileDownload canDownloadURL:]
+[PKFileDownload canDownloadWithResumeData:]
-[PKFileDownload initWithURL:delegate:]
-[PKFileDownload initWithResumeData:destination:delegate:]
-[PKFileDownload finalize]
-[PKFileDownload dealloc]
-[PKFileDownload cancel]
-[PKFileDownload sourcePath]
-[PKFileDownload sourceURL]
-[PKFileDownload resumeData]
-[PKFileDownload setDestination:allowOverwrite:]
-[PKFileDownload _fileCopyThread:]
-[PKFileDownload _currentThreadCallback:]
+[PKURLDownload canDownloadURL:]
+[PKURLDownload canDownloadWithResumeData:]
-[PKURLDownload initWithURL:delegate:]
-[PKURLDownload initWithResumeData:destination:delegate:]
-[PKURLDownload cancel]
-[PKURLDownload sourcePath]
-[PKURLDownload sourceURL]
-[PKURLDownload resumeData]
-[PKURLDownload setDestination:allowOverwrite:]
-[PKURLDownload setDeletesFileUponFailure:]
-[PKURLDownload _wantHTTPLogging]
-[PKURLDownload download:didReceiveAuthenticationChallenge:]
-[PKURLDownload download:didCancelAuthenticationChallenge:]
-[PKURLDownload download:willSendRequest:redirectResponse:]
-[PKURLDownload download:willResumeWithResponse:fromByte:]
-[PKURLDownload download:didReceiveResponse:]
-[PKURLDownload download:didReceiveDataOfLength:]
-[PKURLDownload downloadDidFinish:]
-[PKURLDownload download:didFailWithError:]
+[PKPayloadCopier _defaultBomCopierOptions]
+[PKPayloadCopier _defaultBomCopierOptionsForExtraction]
+[PKPayloadCopier _defaultBomCopierOptionsForArchiving]
-[PKPayloadCopier _hasLZMABlockCompressedCPIOArchiveWithError:]
-[PKPayloadCopier _initWithSourcePath:offset:destination:]
-[PKPayloadCopier initWithArchivePath:offset:destination:]
-[PKPayloadCopier initWithRootPath:destination:]
-[PKPayloadCopier initWithRootPath:destinationArchive:]
-[PKPayloadCopier dealloc]
-[PKPayloadCopier finalize]
-[PKPayloadCopier setMaskPaths:]
-[PKPayloadCopier setIndexBomPath:]
-[PKPayloadCopier setHFSPlusCompressionEnabled:withBackwardsIncompatibleFormat:]
-[PKPayloadCopier setPreservesSourceParentName:]
-[PKPayloadCopier setCopiesOwnershipFromIndexBom:]
-[PKPayloadCopier setPreservesExtAttrs:]
-[PKPayloadCopier setPreservesACLs:]
-[PKPayloadCopier setCopiesQuarantine:]
-[PKPayloadCopier setItemCopiedHandlerOnQueue:withBlock:]
-[PKPayloadCopier setItemWillCopyHandlerWithBlock:]
-[PKPayloadCopier setPayloadFormat:]
-[PKPayloadCopier setPayloadSize:]
-[PKPayloadCopier start]
-[PKPayloadCopier _extractMain:]
-[PKPayloadCopier isExecuting]
-[PKPayloadCopier writtenBytesComplete]
___39-[PKPayloadCopier writtenBytesComplete]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKPayloadCopier itemsComplete]
___32-[PKPayloadCopier itemsComplete]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
-[PKPayloadCopier error]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___24-[PKPayloadCopier error]_block_invoke
___copy_helper_block_146
___destroy_helper_block_147
-[PKPayloadCopier _setError:]
___29-[PKPayloadCopier _setError:]_block_invoke
___copy_helper_block_150
___destroy_helper_block_151
-[PKPayloadCopier cancel]
___25-[PKPayloadCopier cancel]_block_invoke
___copy_helper_block_156
___destroy_helper_block_157
___PKPayloadCopierBOMCopierCopyFileStartedHandler_block_invoke
___copy_helper_block_169
___destroy_helper_block_170
___PKPayloadCopierBOMCopierCopyFileStartedHandler_block_invoke179
___copy_helper_block_180
___destroy_helper_block_181
___PKPayloadCopierBOMCopierCopyFileUpdateHandler_block_invoke
___copy_helper_block_193
___destroy_helper_block_194
___PKPayloadCopierBOMCopierCopyFileFinishedHandler_block_invoke
___copy_helper_block_197
___destroy_helper_block_198
___PKPayloadCopierBOMCopierCopyFileFinishedHandler_block_invoke207
___copy_helper_block_208
___destroy_helper_block_209
-[PKPayloadCopier _startLZMABlockCompressorAndSignalWhenDone:]
___62-[PKPayloadCopier _startLZMABlockCompressorAndSignalWhenDone:]_block_invoke
___copy_helper_block_239
___destroy_helper_block_240
___62-[PKPayloadCopier _startLZMABlockCompressorAndSignalWhenDone:]_block_invoke244
___62-[PKPayloadCopier _startLZMABlockCompressorAndSignalWhenDone:]_block_invoke_2
___copy_helper_block_249
___destroy_helper_block_250
-[PKPayloadCopier run]
___22-[PKPayloadCopier run]_block_invoke
___copy_helper_block_265
___destroy_helper_block_266
-[PKProductUnarchiver initWithProductURL:]
-[PKProductUnarchiver dealloc]
-[PKProductUnarchiver unarchiveToPath:error:]
-[PKProductUnarchiver _unarchiveNonCPIOToPath:error:]
-[PKProductUnarchiver _unarchiveCPIOToPath:error:]
-[PKProductUnarchiver useIndexBom]
-[PKProductUnarchiver setUseIndexBom:]
-[PKProductUnarchiver preserveExtAttrsAndACLs]
-[PKProductUnarchiver setPreserveExtAttrsAndACLs:]
-[PKProductArchiver initWithUnarchivedProduct:]
-[PKProductArchiver dealloc]
-[PKProductArchiver setMapBaselineNamesUsingBlock:]
-[PKProductArchiver writeToArchive:error:]
-[PKProductArchiver _writePackageAtPath:toArchive:atPath:error:]
___64-[PKProductArchiver _writePackageAtPath:toArchive:atPath:error:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKProductArchiver _writeScriptsAtPath:toArchive:atPath:error:]
-[PKProductArchiver copyOwnershipFromOriginalBom]
-[PKProductArchiver setCopyOwnershipFromOriginalBom:]
-[PKProductArchiver overrideDistribution]
-[PKProductArchiver setOverrideDistribution:]
-[PKProductArchiver baselineUnarchivedProduct]
-[PKProductArchiver setBaselineUnarchivedProduct:]
+[PKCheckError errorWithCode:packageIdentifier:userInfo:recoveryAction:message:]
-[_PKCheckErrorRecoveryAttempter initWithAction:]
-[_PKCheckErrorRecoveryAttempter dealloc]
-[_PKCheckErrorRecoveryAttempter attemptRecoveryFromError:optionIndex:]
-[_PKCheckErrorRecoveryAttempter attemptRecoveryFromError:optionIndex:delegate:didRecoverSelector:contextInfo:]
-[PKAddRestrictedRootFlagInstallOperation installState]
-[PKAddRestrictedRootFlagInstallOperation main]
+[PKPackageChecker _defaultCheckedFileAttributes]
-[PKPackageChecker initWithUnarchivedPackage:error:]
-[PKPackageChecker dealloc]
-[PKPackageChecker checkResults]
+[PKPackageChecker stringForCheckErrorCode:]
-[PKPackageChecker _checkPayloadAgainstBom]
-[PKPackageChecker _checkPayloadAgainstPackageInfo:]
-[PKPackageChecker _checkScriptsAgainstPackageInfo:]
-[PKPackageChecker _shouldValidatePayload]
-[PKPackageChecker _searchForComponentsInDirectory:addTo:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___58-[PKPackageChecker _searchForComponentsInDirectory:addTo:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKPackageChecker _checkBundle:againstVersion:usingDisplayPath:]
-[PKPackageChecker _displayStringForBundleVersion:]
-[PKPackageChecker _isValidScriptAtPath:error:]
-[PKPackageChecker checkedFileAttributes]
-[PKPackageChecker setCheckedFileAttributes:]
-[PKProductChecker initWithUnarchivedProduct:interfaceType:error:]
-[PKProductChecker dealloc]
-[PKProductChecker checkResults]
+[PKProductChecker stringForCheckErrorCode:]
-[PKProductChecker _checkPackagesForChoice:]
-[PKProductChecker allowExternalPackages]
-[PKProductChecker setAllowExternalPackages:]
-[PKProductChecker interfaceTypeRequired]
-[PKProductChecker setInterfaceTypeRequired:]
-[PKProductChecker checkedFileAttributes]
-[PKProductChecker setCheckedFileAttributes:]
+[PKTrustAdditions evaluateFirenzeTrust:settingResult:forDeveloper:isDevelopmentSigned:]
_certificateHasExtension
_certificateHasExtendedKeyUsage
_compareOIDs
-[PKInstallManifest initWithInstallRequest:]
-[PKInstallManifest dealloc]
-[PKInstallManifest bundleIdentifiers]
-[PKInstallManifest topBundleIdentifiers]
-[PKInstallManifest defaultInstallPathForBundleIdentifier:]
-[PKInstallManifest actualInstallPathForBundleIdentifier:]
-[PKInstallManifest installedVersionForBundleIdentifier:]
-[PKInstallManifest downgradePathForBundleIdentifier:]
-[PKInstallManifest _processAnalysis]
___37-[PKInstallManifest _processAnalysis]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKUpdateEFWCacheInstallOperation initWithRequest:sandbox:analyzer:]
-[PKUpdateEFWCacheInstallOperation dealloc]
-[PKUpdateEFWCacheInstallOperation installState]
-[PKUpdateEFWCacheInstallOperation _cacheEmbeddedContentForBundleAtPath:error:]
-[PKUpdateEFWCacheInstallOperation main]
-[PKCleanEFWCacheInstallOperation initWithRequest:sandbox:analyzer:]
-[PKCleanEFWCacheInstallOperation dealloc]
-[PKCleanEFWCacheInstallOperation installState]
-[PKCleanEFWCacheInstallOperation main]
-[PKStreamingXARArchive initForReadingFromPath:]
-[PKStreamingXARArchive dealloc]
-[PKStreamingXARArchive _underlyingArchivePath]
-[PKStreamingXARArchive _createOrOpenFileForUpdatingAtPath:error:]
-[PKStreamingXARArchive _verifyMD5Hash:forByteRange:error:]
-[PKStreamingXARArchive supplyBytes:]
-[PKStreamingXARArchive suspendStream]
-[PKStreamingXARArchive finishStream]
+[PKStreamingXARArchive _streamingPlaceholderStateAtPath:]
+[PKStreamingXARArchive _writeSteamingPlaceholderState:atPath:]
+[PKStreamingXARArchive _streamingPlaceholderExistsAtPath:md5Hashes:hashedChunkSize:]
+[PKStreamingXARArchive _createStreamingPlaceholderAtPath:md5Hashes:hashedChunkSize:resumptionOffset:error:]
-[PKStreamingXARArchive hashedChunkSize]
-[PKStreamingXARArchive md5Hashes]
-[PKStreamingXARArchive resumptionOffset]
-[PKStreamingXARArchive setResumptionOffset:]
-[PKStreamingXARArchive isSuspended]
-[PKStreamingXARArchive setSuspended:]
-[PKStreamingXARArchive isFinished]
-[PKStreamingXARArchive setFinished:]
-[PKPatchAndUpdateInstallOperation initWithRequest:sandbox:analyzer:]
-[PKPatchAndUpdateInstallOperation dealloc]
-[PKPatchAndUpdateInstallOperation finalize]
-[PKPatchAndUpdateInstallOperation estimatedTimeRemaining]
-[PKPatchAndUpdateInstallOperation _shouldUseUpdateVariantForPackageSpecifier:]
-[PKPatchAndUpdateInstallOperation _patchAndUpdateForPackageSpecifier:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___77-[PKPatchAndUpdateInstallOperation _patchAndUpdateForPackageSpecifier:error:]_block_invoke
___77-[PKPatchAndUpdateInstallOperation _patchAndUpdateForPackageSpecifier:error:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_149
___destroy_helper_block_150
-[PKPatchAndUpdateInstallOperation main]
-[PKPatchAndUpdateInstallOperation _copyItemAtPath:withAttributes:toPath:usingAFSC:withNewAFSCFormat:error:]
__handleBOMCopierFatalFileError
__handleBOMCopierFatalError
-[NSFileManager(SizingAdditions) _sizeOfDirectoryAtPath:error:]
-[NSBundle(CodeSigningAdditions) _verifyCodeSignaturesWithRequirement:recursively:errors:]
-[NSBundle(CodeSigningAdditions) _verifyCodeSignaturesWithRequirement:recursively:errors:cancelUsingTest:]
-[NSBundle(CodeSigningAdditionsPrivate) __verifyCodeSignaturesWithRequirement:recursively:addingErrorsTo:cancelUsingTest:]
-[NSBundle(CodeSigningAdditionsPrivate) __verifyCodeSignaturesUnderDirectory:requirements:currentBundleResourcePath:addingErrorsTo:cancelUsingTest:]
-[NSBundle(CodeSigningAdditionsPrivate) __verifyCodeSignatureOnURL:requirements:error:]
-[PKWriteMASReceiptInstallOperation installState]
-[PKWriteMASReceiptInstallOperation _receiptPathInBundle:]
-[PKWriteMASReceiptInstallOperation _addAppStoreReceipt:forPackageSpecifier:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___83-[PKWriteMASReceiptInstallOperation _addAppStoreReceipt:forPackageSpecifier:error:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKWriteMASReceiptInstallOperation main]
+[PKBundleStorage _allStorageClasses]
+[PKBundleStorage bundleStorageWithPath:]
-[PKBundleStorage _initWithPath:fileAttributes:]
-[PKBundleStorage _initWithPath:storageType:identifier:versionAttributes:]
-[PKBundleStorage dealloc]
-[PKBundleStorage description]
-[PKBundleStorage storageType]
-[PKBundleStorage identifier]
-[PKBundleStorage versionAttributes]
-[PKCFBundleStorage _initWithPath:fileAttributes:]
-[PKSafariExtensionBundleStorage _initWithPath:fileAttributes:]
-[PKMachOWithInfoPlistBundleStorage _initWithPath:fileAttributes:]
+[PKSigningIdentity bestSigningIdentityFromString:fromKeychain:]
+[PKSigningIdentity bestSigningIdentityFromString:fromKeychain:error:]
+[PKSigningIdentity bestSigningIdentityFromString:fromKeychain:forCodeSigning:error:]
+[PKSigningIdentity allSigningIdentitiesWithPrefix:fromKeychain:]
+[PKSigningIdentity allSigningIdentitiesWithPrefix:fromKeychain:forCodeSigning:]
+[PKSigningIdentity commonNameForCertificate:]
-[PKSigningIdentity dealloc]
-[PKSigningIdentity isEqual:]
-[PKSigningIdentity description]
-[PKSigningIdentity identityRef]
-[PKSigningIdentity name]
-[PKSigningIdentity shouldUseTSAByDefault]
-[PKSigningIdentity supportingCertificateRefs]
-[PKSigningIdentity addIntermediateCertificateWithCommonName:]
-[PKSigningIdentity keychainPath]
-[PKSigningIdentity _initWithIdentityRef:keychainSpec:]
+[PKSigningIdentity _copyKeychainWithPath:]
+[PKSigningIdentity _validIdentitiesMatchingPrefix:fromKeychain:forCodeSigning:didExcludeWrongIdentities:]
+[PKSigningIdentity _identitiesMatchingPrefix:policy:fromKeychain:]
-[PKSigningIdentity _sha1AsString]
-[PKSigningIdentity _levelOfMatch:]
-[PKSignedContainer _initCommon]
-[PKSignedContainer initForReadingFromContainerAtURL:error:]
-[PKSignedContainer dealloc]
-[PKSignedContainer _setAssessment:ofItemAtPath:]
-[PKSignedContainer _assessURL:withQuarantineFlags:]
-[PKSignedContainer _assessContainerReturningShouldFlagContents:]
-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke120
___copy_helper_block_127
___destroy_helper_block_128
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke140
___copy_helper_block_143
___destroy_helper_block_144
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke149
___copy_helper_block_152
___destroy_helper_block_153
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke158
___copy_helper_block_159
___destroy_helper_block_160
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke163
___copy_helper_block_166
___destroy_helper_block_167
___89-[PKSignedContainer _startUnarchivingAtPath:cancelHandler:notifyOnQueue:progress:finish:]_block_invoke174
___copy_helper_block_175
___destroy_helper_block_176
-[PKSignedContainer startUnarchivingAtPath:notifyOnQueue:progress:finish:]
___74-[PKSignedContainer startUnarchivingAtPath:notifyOnQueue:progress:finish:]_block_invoke
___copy_helper_block_182
___destroy_helper_block_183
-[PKSignedContainer cancelOperation:]
-[PKSignedContainer performsAssessmentIfNeeded]
-[PKSignedContainer setPerformsAssessmentIfNeeded:]
-[PKSignedContainer(ForInstallableObject) _archive]
-[PKMutableSignedContainer initForWritingContainerWithIdentity:supportingCertificates:]
-[PKMutableSignedContainer dealloc]
-[PKMutableSignedContainer finalize]
-[PKMutableSignedContainer addFileAtPath:error:]
-[PKMutableSignedContainer _writeIndexBomToPath:]
-[PKMutableSignedContainer _archiveToPath:error:]
-[PKMutableSignedContainer startArchivingAtPath:notifyOnQueue:progress:finish:]
___79-[PKMutableSignedContainer startArchivingAtPath:notifyOnQueue:progress:finish:]_block_invoke
___79-[PKMutableSignedContainer startArchivingAtPath:notifyOnQueue:progress:finish:]_block_invoke_2
___copy_helper_block_292
___destroy_helper_block_293
___79-[PKMutableSignedContainer startArchivingAtPath:notifyOnQueue:progress:finish:]_block_invoke298
___copy_helper_block_299
___destroy_helper_block_300
___79-[PKMutableSignedContainer startArchivingAtPath:notifyOnQueue:progress:finish:]_block_invoke303
___copy_helper_block_304
___destroy_helper_block_305
___copy_helper_block_308
___destroy_helper_block_309
-[PKMutableSignedContainer useTSA]
-[PKMutableSignedContainer setUseTSA:]
-[_PKSignedContainerCopyCancelHandler init]
-[_PKSignedContainerCopyCancelHandler dealloc]
-[_PKSignedContainerCopyCancelHandler finalize]
-[_PKSignedContainerCopyCancelHandler isCancelled]
___50-[_PKSignedContainerCopyCancelHandler isCancelled]_block_invoke
___copy_helper_block_333
___destroy_helper_block_334
-[_PKSignedContainerCopyCancelHandler setCopier:]
___49-[_PKSignedContainerCopyCancelHandler setCopier:]_block_invoke
___copy_helper_block_337
___destroy_helper_block_338
-[_PKSignedContainerCopyCancelHandler cancel]
___45-[_PKSignedContainerCopyCancelHandler cancel]_block_invoke
___copy_helper_block_341
___destroy_helper_block_342
-[PKInstallableObject initWithURL:]
-[PKInstallableObject dealloc]
-[PKInstallableObject description]
-[PKInstallableObject isSigned]
-[PKInstallableObject certificates]
-[PKInstallableObject _packageURLsUnderChoice:internal:]
-[PKInstallableObject referencedObjects]
-[PKInstallableObject bomsAsData]
-[PKInstallableObject URL]
+[PKInstallSandboxManager sharedSandboxManager]
___47+[PKInstallSandboxManager sharedSandboxManager]_block_invoke
-[PKInstallSandboxManager init]
-[PKInstallSandboxManager dealloc]
-[PKInstallSandboxManager finalize]
-[PKInstallSandboxManager sandboxForRequest:error:]
-[PKInstallSandboxManager saveSandboxAsStaged:]
-[PKInstallSandboxManager discardSandbox:]
___42-[PKInstallSandboxManager discardSandbox:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKInstallSandboxManager hasStagedSandboxForRequest:]
-[PKInstallSandboxManager _statePathForSandboxAtPath:]
-[PKInstallSandboxManager _sandboxAtPath:matchingRequest:forUse:]
-[PKInstallSandboxManager _currentSandboxPathsForDestination:]
___62-[PKInstallSandboxManager _currentSandboxPathsForDestination:]_block_invoke
___copy_helper_block_112
___destroy_helper_block_113
-[PKInstallSandboxManager _addSandboxPathForDestination:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___57-[PKInstallSandboxManager _addSandboxPathForDestination:]_block_invoke
___copy_helper_block_123
___destroy_helper_block_124
-[PKInstallSandboxManager _activateSandboxAtPath:]
___50-[PKInstallSandboxManager _activateSandboxAtPath:]_block_invoke
___copy_helper_block_132
___destroy_helper_block_133
-[PKInstallSandboxManager _deactivateSandboxAtPath:]
___52-[PKInstallSandboxManager _deactivateSandboxAtPath:]_block_invoke
___copy_helper_block_137
___destroy_helper_block_138
-[PKInstallSandboxManager _trashSandboxAtPath:]
___47-[PKInstallSandboxManager _trashSandboxAtPath:]_block_invoke
___copy_helper_block_142
___destroy_helper_block_143
-[PKInstallSandboxManager _removeSandbox:]
-[PKInstallSandboxManager _sandboxRepositoryForDestination:create:error:]
-[PKInstallSandboxManager _repositoryParentPathForRootVolume]
-[PKInstallSandboxManager _canCreateDirectoryUnder:]
-[PKInstallSandboxManager purgeableSpaceOnVolume:]
-[PKInstallSandboxManager purgeableSpaceOnVolume:appStoreOnly:]
-[PKInstallSandboxManager irrelevantSpaceOnVolume:forInstallingRequest:]
-[PKInstallSandboxManager requestFreeSpace:onVolume:forInstallingRequest:appStoreOnly:notifyOn:withBlock:]
___106-[PKInstallSandboxManager requestFreeSpace:onVolume:forInstallingRequest:appStoreOnly:notifyOn:withBlock:]_block_invoke
___106-[PKInstallSandboxManager requestFreeSpace:onVolume:forInstallingRequest:appStoreOnly:notifyOn:withBlock:]_block_invoke_2
___copy_helper_block_178
___destroy_helper_block_179
___106-[PKInstallSandboxManager requestFreeSpace:onVolume:forInstallingRequest:appStoreOnly:notifyOn:withBlock:]_block_invoke204
___copy_helper_block_205
___destroy_helper_block_206
___copy_helper_block_209
___destroy_helper_block_210
-[PKInstallSandboxManager finishSandboxRemovalWithCompletionHandler:]
___69-[PKInstallSandboxManager finishSandboxRemovalWithCompletionHandler:]_block_invoke
___copy_helper_block_214
___destroy_helper_block_215
-[PKInstallSandboxManager _inactiveSandboxesOnMountPoint:forInstallingRequest:appStoreOnly:calculateRelevance:invalidSandboxPaths:]
___131-[PKInstallSandboxManager _inactiveSandboxesOnMountPoint:forInstallingRequest:appStoreOnly:calculateRelevance:invalidSandboxPaths:]_block_invoke
___copy_helper_block_224
___destroy_helper_block_225
-[PKInstallSandboxManager _compareSandbox:toSandbox:]
+[PKInstallSandboxManager _stagingCachePaths]
-[PKInstallSandboxManager _relevanceOfSandbox:forInstallingRequest:]
-[PKInstallSandboxManager pathToSharedTemporaryDirectoryCreating:]
-[PKInstallSandboxManager purgeSharedTemporaryDirectory]
+[PKInstallSandboxManager _verboseMode]
-[PKPrepareForCommitInstallOperation initWithRequest:sandbox:analyzer:manager:]
-[PKPrepareForCommitInstallOperation dealloc]
-[PKPrepareForCommitInstallOperation installState]
-[PKPrepareForCommitInstallOperation main]
-[PKPrepareDiskInstallOperation _currentSpaceDeficit]
-[PKPrepareDiskInstallOperation initWithRequest:sandbox:analyzer:]
-[PKPrepareDiskInstallOperation installState]
-[PKPrepareDiskInstallOperation main]
___37-[PKPrepareDiskInstallOperation main]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKXPCCacheInstallOperation initWithRequest:sandbox:analyzer:updateInSandbox:]
-[PKXPCCacheInstallOperation description]
-[PKXPCCacheInstallOperation _shouldRebuildXPCServiceCache]
-[PKXPCCacheInstallOperation installState]
-[PKXPCCacheInstallOperation _pathForTool:]
-[PKXPCCacheInstallOperation _installingToYosemiteOrAbove]
-[PKXPCCacheInstallOperation _triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:]
-[PKXPCCacheInstallOperation _rebuildXPCServiceCacheInSandboxReturningError:]
-[PKXPCCacheInstallOperation main]
-[PKXPCCacheInstallOperation cancel]
-[PKVerifyMASPayloadInstallOperation initWithRequest:sandbox:analyzer:]
___71-[PKVerifyMASPayloadInstallOperation initWithRequest:sandbox:analyzer:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKVerifyMASPayloadInstallOperation installState]
-[PKVerifyMASPayloadInstallOperation currentPackageSpecifier]
-[PKVerifyMASPayloadInstallOperation messageTracerDomain]
-[PKVerifyMASPayloadInstallOperation messageTracerComment]
-[PKVerifyMASPayloadInstallOperation _shouldSkipDRCheck]
-[PKVerifyMASPayloadInstallOperation _verifyCodeSignaturesForPackageSpecifier:error:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___85-[PKVerifyMASPayloadInstallOperation _verifyCodeSignaturesForPackageSpecifier:error:]_block_invoke
___85-[PKVerifyMASPayloadInstallOperation _verifyCodeSignaturesForPackageSpecifier:error:]_block_invoke_2
___copy_helper_block_61
___destroy_helper_block_62
___copy_helper_block_79
___destroy_helper_block_80
-[PKVerifyMASPayloadInstallOperation main]
-[PKInstallCommitManager initWithRequest:]
-[PKInstallCommitManager dealloc]
-[PKInstallCommitManager beginCommit]
___37-[PKInstallCommitManager beginCommit]_block_invoke
-[PKInstallCommitManager endCommit]
-[PKInstallCommitManager _commitCookiePath]
-[PKInstallCommitManager _startMonitor]
-[PKInstallCommitManager _waitUntilMonitorDone]
-[PKFolderArchiveProduct _initWithPath:error:]
-[PKFolderArchiveProduct dealloc]
-[PKFolderArchiveProduct URL]
-[PKFolderArchiveProduct productType]
-[PKFolderArchiveProduct distribution]
-[PKFolderArchiveProduct distributionContainer]
-[PKFolderArchiveProduct stringsDictionary]
-[PKFolderArchiveProduct localizedStringForKey:value:]
-[PKFolderArchiveProduct allPackageReferences]
-[PKFolderArchiveProduct _distributionDataFromArchive:returningDistributionURL:error:]
-[PKFolderArchiveProduct _synthesizedDistributionFromMetaPackageInArchive:]
+[PKFolderArchiveProduct(ForSubclassers) canInitWithURL:]
-[PKFolderArchiveProduct(ForSubclassers) initByLoadingProductAtURL:error:]
-[PKFolderArchiveProduct(ForSubclassers) _archiveForTrustEvaluation]
-[PKFolderArchiveProduct(ForSubclassers) evaluateTrustReturningError:]
+[NSData(CompressionAdditions) _dataByDecompressingFileAtPath:]
-[PKDeferredInstallManager initWithDestinationPath:error:]
-[PKDeferredInstallManager dealloc]
-[PKDeferredInstallManager rootPath]
-[PKDeferredInstallManager addScriptAtPath:error:]
-[PKDeferredInstallManager prepareWithDeferredFileList:error:]
-[PKInstallDaemonClient initWithConnection:]
-[PKInstallDaemonClient dealloc]
-[PKInstallDaemonClient description]
-[PKInstallDaemonClient isWatchingInstallWithToken:]
___52-[PKInstallDaemonClient isWatchingInstallWithToken:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PKInstallDaemonClient cancelInstallsWherePossible]
___52-[PKInstallDaemonClient cancelInstallsWherePossible]_block_invoke
___copy_helper_block_51
___destroy_helper_block_52
-[PKInstallDaemonClient invalidate]
-[PKInstallDaemonClient tokenForInstallRequest:reply:]
___54-[PKInstallDaemonClient tokenForInstallRequest:reply:]_block_invoke
___54-[PKInstallDaemonClient tokenForInstallRequest:reply:]_block_invoke_2
___copy_helper_block_60
___destroy_helper_block_61
___copy_helper_block_64
___destroy_helper_block_65
-[PKInstallDaemonClient addToken:reply:]
-[PKInstallDaemonClient installStatusForToken:reply:]
-[PKInstallDaemonClient displayNamesForToken:reply:]
-[PKInstallDaemonClient tokenForCurrentCommitIgnoringBlockingClients:reply:]
___76-[PKInstallDaemonClient tokenForCurrentCommitIgnoringBlockingClients:reply:]_block_invoke
___76-[PKInstallDaemonClient tokenForCurrentCommitIgnoringBlockingClients:reply:]_block_invoke_2
___copy_helper_block_77
___destroy_helper_block_78
___copy_helper_block_81
___destroy_helper_block_82
-[PKInstallDaemonClient adoptToken:reply:]
-[PKInstallDaemonClient registerAuthorizationFromInstallRequest:reply:]
-[PKInstallDaemonClient currentStageStatusOfInstallRequest:calculatePurgeableSize:reply:]
-[PKInstallDaemonClient estimateOfPurgeableSpaceForSandboxesOnVolume:reply:]
-[PKInstallDaemonClient startPurgeOfSandboxesOnVolume:untilFreeSpaceAvailable:reply:]
-[PKInstallDaemonClient installDidBeginForToken:]
-[PKInstallDaemonClient installDidBeginCommitForToken:]
-[PKInstallDaemonClient installDidEndForToken:]
___47-[PKInstallDaemonClient installDidEndForToken:]_block_invoke
___copy_helper_block_106
___destroy_helper_block_107
-[PKInstallDaemonClient connection]
_PCompressGetHeader
_PCompressZLIBEncode
_LZ4HC_compress_generic
-[PKInstallRequest(Authorization) authorizeForRight:allowingInteraction:].authItem
-[PKVerifyMASPayloadInstallOperation _verifyCodeSignaturesForPackageSpecifier:error:].csreq_data
_LZ4_decompress_generic.dec32table
_LZ4_decompress_generic.dec64table
GCC_except_table1
GCC_except_table12
GCC_except_table47
GCC_except_table53
GCC_except_table71
GCC_except_table22
GCC_except_table31
GCC_except_table38
GCC_except_table70
GCC_except_table121
GCC_except_table19
GCC_except_table40
GCC_except_table77
GCC_except_table79
GCC_except_table102
GCC_except_table109
GCC_except_table9
GCC_except_table3
GCC_except_table21
GCC_except_table56
GCC_except_table62
GCC_except_table26
GCC_except_table16
GCC_except_table18
GCC_except_table37
GCC_except_table12
GCC_except_table5
GCC_except_table33
GCC_except_table72
GCC_except_table9
GCC_except_table5
GCC_except_table2
GCC_except_table3
GCC_except_table9
___block_descriptor_tmp
___block_descriptor_tmp28
___block_literal_global
___block_descriptor_tmp38
___block_descriptor_tmp56
___block_descriptor_tmp112
___block_descriptor_tmp120
___block_descriptor_tmp137
___block_descriptor_tmp147
___block_descriptor_tmp163
___block_descriptor_tmp169
___block_descriptor_tmp174
___block_descriptor_tmp192
___block_descriptor_tmp205
___block_descriptor_tmp252
___block_descriptor_tmp256
___block_descriptor_tmp307
___block_descriptor_tmp313
___block_descriptor_tmp334
___block_literal_global335
___block_descriptor_tmp342
___block_descriptor_tmp346
___block_descriptor_tmp360
___block_literal_global361
___block_descriptor_tmp367
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp87
___block_descriptor_tmp91
___block_descriptor_tmp107
___block_descriptor_tmp118
___block_descriptor_tmp125
___block_descriptor_tmp150
___block_descriptor_tmp154
___block_descriptor_tmp169
___block_descriptor_tmp177
___block_descriptor_tmp183
___block_descriptor_tmp187
___block_descriptor_tmp191
___block_descriptor_tmp197
___block_descriptor_tmp211
___block_descriptor_tmp217
___block_descriptor_tmp229
___block_descriptor_tmp235
___block_descriptor_tmp242
___block_descriptor_tmp254
___block_descriptor_tmp276
___block_descriptor_tmp284
___block_descriptor_tmp294
___block_descriptor_tmp298
___block_descriptor_tmp318
___block_literal_global319
___block_descriptor_tmp321
___block_literal_global322
___block_descriptor_tmp332
___block_descriptor_tmp338
___block_descriptor_tmp346
___block_descriptor_tmp350
___block_descriptor_tmp455
___block_descriptor_tmp461
___block_descriptor_tmp466
___block_descriptor_tmp473
___block_descriptor_tmp
___block_descriptor_tmp181
___block_descriptor_tmp185
-[PKInstallRequest(Authorization) _validateAuthorizationReturningAcquiredRights:].authItems
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp272
___block_descriptor_tmp289
___block_descriptor_tmp456
___block_descriptor_tmp462
___block_descriptor_tmp466
___block_descriptor_tmp474
___block_descriptor_tmp496
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp114
___block_descriptor_tmp
___block_descriptor_tmp38
___block_descriptor_tmp65
___block_descriptor_tmp138
___block_descriptor_tmp144
___block_descriptor_tmp
___block_descriptor_tmp150
___block_descriptor_tmp158
___block_descriptor_tmp170
___block_descriptor_tmp176
___block_descriptor_tmp183
___block_descriptor_tmp188
___block_descriptor_tmp193
___block_descriptor_tmp237
___block_descriptor_tmp322
_PKMessageInfoValues
_PKMessageFailureValues
_PKMessageSuccessValues
___block_descriptor_tmp
___block_descriptor_tmp122
___block_descriptor_tmp134
___block_literal_global
___block_descriptor_tmp145
___block_descriptor_tmp149
___block_descriptor_tmp154
___block_descriptor_tmp160
___block_descriptor_tmp170
___block_descriptor_tmp186
___block_descriptor_tmp193
___block_descriptor_tmp200
___block_descriptor_tmp215
___block_descriptor_tmp230
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp72
___block_descriptor_tmp103
___block_literal_global104
___block_descriptor_tmp116
___block_descriptor_tmp136
___block_descriptor_tmp146
___block_descriptor_tmp151
___block_descriptor_tmp157
___block_descriptor_tmp167
___block_descriptor_tmp189
___block_literal_global190
___block_descriptor_tmp192
___block_literal_global193
___block_descriptor_tmp236
___block_literal_global237
___block_descriptor_tmp241
___block_literal_global242
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp100
___block_descriptor_tmp106
___block_descriptor_tmp116
___block_descriptor_tmp129
___block_descriptor_tmp149
___block_descriptor_tmp153
___block_descriptor_tmp159
___block_descriptor_tmp165
___block_descriptor_tmp
___block_descriptor_tmp42
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp145
___block_descriptor_tmp149
___block_descriptor_tmp153
___block_descriptor_tmp159
___block_descriptor_tmp172
___block_descriptor_tmp183
___block_descriptor_tmp196
___block_descriptor_tmp200
___block_descriptor_tmp211
___block_descriptor_tmp243
___block_descriptor_tmp247
___block_descriptor_tmp252
___block_descriptor_tmp268
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp153
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp131
___block_descriptor_tmp146
___block_descriptor_tmp155
___block_descriptor_tmp162
___block_descriptor_tmp169
___block_descriptor_tmp178
___block_descriptor_tmp185
___block_descriptor_tmp295
___block_descriptor_tmp302
___block_descriptor_tmp307
___block_descriptor_tmp311
___block_descriptor_tmp336
___block_descriptor_tmp340
___block_descriptor_tmp344
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp68
___block_descriptor_tmp115
___block_descriptor_tmp126
___block_descriptor_tmp135
___block_descriptor_tmp140
___block_descriptor_tmp145
___block_descriptor_tmp182
___block_descriptor_tmp208
___block_descriptor_tmp212
___block_descriptor_tmp217
___block_descriptor_tmp227
___block_descriptor_tmp
___block_descriptor_tmp
___block_descriptor_tmp65
___block_descriptor_tmp82
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp54
___block_descriptor_tmp63
___block_descriptor_tmp68
___block_descriptor_tmp80
___block_descriptor_tmp85
___block_descriptor_tmp109
_lzvn_decode.opcode_table
_OBJC_IVAR_$_PKPackage._url
_OBJC_IVAR_$_PKStreamingProduct._currentError
_PKInstallDaemonVerboseMode.verbose
_PKPackageRequireInfoPlistEnabled
_PKPackagePatchCreationEnabled
_PKPackagePatchCreationMinNewSize
_PKPackagePatchCreationMaxNewSize
_PKPackagePatchCreationMaxSizeDiff
_PKPackagePatchCreationMaxPatchToNewRatio
-[PKDownloader _wantHTTPLogging].want
-[_PKURLConnectionDelegate _wantHTTPLogging].want
+[PKInstallOperationController _verboseMode].verbose
-[PKURLDownload _wantHTTPLogging].want
__testAppleSignedMacInstallerPackageMarkerData
__appleSignedMacInstallerPackageMarkerData
__thirdPartyMacInstallerPackageMarkerData
__appleInstallerPackageSigningEKUData
__thirdPartyInstallerPackageSigningEKUData
__developerRelationsIntermediateMarkerData
__developerIDAppSigningMarkerData
__developerIDInstallerPackageMarkerData
+[PKInstallSandboxManager _verboseMode].verbose
_sVerboseMode
+[PKInstallClient _modifyConnectionsForRegisteredAuthorizations:].registeredConns
+[PKInstallClient _modifyConnectionsForRegisteredAuthorizations:].registeredConnsQueue
+[PKInstallClient _modifyConnectionsForRegisteredAuthorizations:].once
+[PKInstallDaemon sharedServiceDaemon].instance
+[PKInstallDaemon sharedServiceDaemon].once
__open_with_static_content.failed
+[PKXARArchive _fileAttributeKeyForXARPropertyName:].sXARPropertyNameMap
+[PKXARArchive _fileAttributeKeyForXARFileType:].sXARFileTypeMap
__RelinkFile.loggedCrossDeviceShove
-[PKReceipt initWithBundlePkgPath:].sBundleLock
_sUserAgentString
+[PKPackageSourceManager defaultManager].sManager
_sAuthenticationHandler
_sUserAgentString
_sAllowFolderArchives
+[PKInstallHistory defaultHistory].sInstallHistory
+[PKBundleComponentVersion _orderedVersionKeys].versionKeys
-[PKDistributionPackageReference attributesAsDictionary].attrNames
-[PKMutableDistributionContainer storeResourcesAtPath:forLocalization:].standardResources
_sPKDownloadClasses
-[PKSigningIdentity _levelOfMatch:].nonHexCharSet
+[PKInstallSandboxManager sharedSandboxManager].mgr
+[PKInstallSandboxManager sharedSandboxManager].mgrOnce
-[PKInstallSandboxManager _repositoryParentPathForRootVolume].didWarn
+[PKInstallSandboxManager _stagingCachePaths].paths
_LZ4_compress
_LZ4_compressBound
_LZ4_compressHC
_LZ4_compressHC2
_LZ4_compressHC2_continue
_LZ4_compressHC2_limitedOutput
_LZ4_compressHC2_limitedOutput_continue
_LZ4_compressHC2_limitedOutput_withStateHC
_LZ4_compressHC2_withStateHC
_LZ4_compressHC_continue
_LZ4_compressHC_limitedOutput
_LZ4_compressHC_limitedOutput_continue
_LZ4_compressHC_limitedOutput_withStateHC
_LZ4_compressHC_withStateHC
_LZ4_compress_continue
_LZ4_compress_limitedOutput
_LZ4_compress_limitedOutput_continue
_LZ4_compress_limitedOutput_withState
_LZ4_compress_withState
_LZ4_create
_LZ4_createHC
_LZ4_decompress_fast
_LZ4_decompress_fast_withPrefix64k
_LZ4_decompress_safe
_LZ4_decompress_safe_partial
_LZ4_decompress_safe_withPrefix64k
_LZ4_free
_LZ4_freeHC
_LZ4_resetStreamState
_LZ4_resetStreamStateHC
_LZ4_sizeofState
_LZ4_sizeofStateHC
_LZ4_sizeofStreamState
_LZ4_sizeofStreamStateHC
_LZ4_slideInputBuffer
_LZ4_slideInputBufferHC
_LZ4_uncompress
_LZ4_uncompress_unknownOutputSize
_OBJC_CLASS_$_PKAddExtendedAttributesInstallOperation
_OBJC_CLASS_$_PKAddRestrictedRootFlagInstallOperation
_OBJC_CLASS_$_PKArchive
_OBJC_CLASS_$_PKArchiveDistributionContainer
_OBJC_CLASS_$_PKArchiveProduct
_OBJC_CLASS_$_PKArchiveSignature
_OBJC_CLASS_$_PKArchiveSigner
_OBJC_CLASS_$_PKBOM
_OBJC_CLASS_$_PKBOMDirectoryEnumerator
_OBJC_CLASS_$_PKBundleComponent
_OBJC_CLASS_$_PKBundleComponentVersion
_OBJC_CLASS_$_PKBundleStorage
_OBJC_CLASS_$_PKCFBundleStorage
_OBJC_CLASS_$_PKCheckError
_OBJC_CLASS_$_PKCleanEFWCacheInstallOperation
_OBJC_CLASS_$_PKComponent
_OBJC_CLASS_$_PKDYLDCacheInstallOperation
_OBJC_CLASS_$_PKDataSizeFormatter
_OBJC_CLASS_$_PKDataSizeValueTransformer
_OBJC_CLASS_$_PKDeferredInstallManager
_OBJC_CLASS_$_PKDistribution
_OBJC_CLASS_$_PKDistributionChoice
_OBJC_CLASS_$_PKDistributionContainer
_OBJC_CLASS_$_PKDistributionPackageReference
_OBJC_CLASS_$_PKDistributionScript
_OBJC_CLASS_$_PKDownload
_OBJC_CLASS_$_PKDownloader
_OBJC_CLASS_$_PKDownloaderQueue
_OBJC_CLASS_$_PKDownloaderQueueElement
_OBJC_CLASS_$_PKDownloaderSpeedTracker
_OBJC_CLASS_$_PKExtendedAttribute
_OBJC_CLASS_$_PKExtendedAttributeEnumerator
_OBJC_CLASS_$_PKExtractInstallOperation
_OBJC_CLASS_$_PKFileDownload
_OBJC_CLASS_$_PKFlatDistributionContainer
_OBJC_CLASS_$_PKFolderArchive
_OBJC_CLASS_$_PKFolderArchiveProduct
_OBJC_CLASS_$_PKFolderArchiveSignature
_OBJC_CLASS_$_PKInstall
_OBJC_CLASS_$_PKInstallAnalyzer
_OBJC_CLASS_$_PKInstallClient
_OBJC_CLASS_$_PKInstallCommitManager
_OBJC_CLASS_$_PKInstallDaemon
_OBJC_CLASS_$_PKInstallDaemonClient
_OBJC_CLASS_$_PKInstallError
_OBJC_CLASS_$_PKInstallHistory
_OBJC_CLASS_$_PKInstallManifest
_OBJC_CLASS_$_PKInstallOperation
_OBJC_CLASS_$_PKInstallOperationController
_OBJC_CLASS_$_PKInstallRequest
_OBJC_CLASS_$_PKInstallSandbox
_OBJC_CLASS_$_PKInstallSandboxManager
_OBJC_CLASS_$_PKInstallStateHelper
_OBJC_CLASS_$_PKInstallTask
_OBJC_CLASS_$_PKInstallableObject
_OBJC_CLASS_$_PKJaguarPackage
_OBJC_CLASS_$_PKKextCacheInstallOperation
_OBJC_CLASS_$_PKLSRegisterInstallOperation
_OBJC_CLASS_$_PKLeopardPackage
_OBJC_CLASS_$_PKMachOWithInfoPlistBundleStorage
_OBJC_CLASS_$_PKMutableArchive
_OBJC_CLASS_$_PKMutableBOM
_OBJC_CLASS_$_PKMutableDistributionContainer
_OBJC_CLASS_$_PKMutableLeopardPackage
_OBJC_CLASS_$_PKMutablePackage
_OBJC_CLASS_$_PKMutableProduct
_OBJC_CLASS_$_PKMutableReceipt
_OBJC_CLASS_$_PKMutableSignedContainer
_OBJC_CLASS_$_PKMutableXARArchive
_OBJC_CLASS_$_PKNetEnabledProduct
_OBJC_CLASS_$_PKObsoletionInstallOperation
_OBJC_CLASS_$_PKPackage
_OBJC_CLASS_$_PKPackageChecker
_OBJC_CLASS_$_PKPackageInfo
_OBJC_CLASS_$_PKPackageReference
_OBJC_CLASS_$_PKPackageRequirements
_OBJC_CLASS_$_PKPackageSourceManager
_OBJC_CLASS_$_PKPackageSpecifier
_OBJC_CLASS_$_PKPatchAndUpdateInstallOperation
_OBJC_CLASS_$_PKPatchFilesInstallOperation
_OBJC_CLASS_$_PKPayloadCopier
_OBJC_CLASS_$_PKPrepareDiskInstallOperation
_OBJC_CLASS_$_PKPrepareForCommitInstallOperation
_OBJC_CLASS_$_PKProduct
_OBJC_CLASS_$_PKProductArchiver
_OBJC_CLASS_$_PKProductChecker
_OBJC_CLASS_$_PKProductInfo
_OBJC_CLASS_$_PKProductUnarchiver
_OBJC_CLASS_$_PKReceipt
_OBJC_CLASS_$_PKRelocateComponentsInstallOperation
_OBJC_CLASS_$_PKRunPackageScriptInstallOperation
_OBJC_CLASS_$_PKSafariExtensionBundleStorage
_OBJC_CLASS_$_PKScript
_OBJC_CLASS_$_PKSecureNetEnabledProduct
_OBJC_CLASS_$_PKSetupDeferredInstallOperation
_OBJC_CLASS_$_PKShoveInstallOperation
_OBJC_CLASS_$_PKSignedContainer
_OBJC_CLASS_$_PKSigningIdentity
_OBJC_CLASS_$_PKStreamingProduct
_OBJC_CLASS_$_PKStreamingXARArchive
_OBJC_CLASS_$_PKTimeRemainingFormatter
_OBJC_CLASS_$_PKTimeRemainingValueTransformer
_OBJC_CLASS_$_PKTrust
_OBJC_CLASS_$_PKTrustAdditions
_OBJC_CLASS_$_PKURLConnection
_OBJC_CLASS_$_PKURLDownload
_OBJC_CLASS_$_PKUpdateEFWCacheInstallOperation
_OBJC_CLASS_$_PKVerifyMASPayloadInstallOperation
_OBJC_CLASS_$_PKWriteMASReceiptInstallOperation
_OBJC_CLASS_$_PKWriteReceiptsInstallOperation
_OBJC_CLASS_$_PKXARArchive
_OBJC_CLASS_$_PKXARArchiveSignature
_OBJC_CLASS_$_PKXPCCacheInstallOperation
_OBJC_CLASS_$_XARDirectoryEnumerator
_OBJC_CLASS_$__PKCheckErrorRecoveryAttempter
_OBJC_CLASS_$__PKInstallClientConnection
_OBJC_CLASS_$__PKPackageCreationFileDigest
_OBJC_CLASS_$__PKSignedContainerCopyCancelHandler
_OBJC_CLASS_$__PKURLConnectionDelegate
_OBJC_IVAR_$_PKArchiveDistributionContainer._archive
_OBJC_IVAR_$_PKArchiveDistributionContainer._lprojSubpathByName
_OBJC_IVAR_$_PKArchiveDistributionContainer._strings
_OBJC_IVAR_$_PKArchiveProduct._archive
_OBJC_IVAR_$_PKArchiveProduct._container
_OBJC_IVAR_$_PKArchiveProduct._installerPluginsPath
_OBJC_IVAR_$_PKArchiveProduct._packageIdentifierToURLMap
_OBJC_IVAR_$_PKArchiveProduct._productIdentifier
_OBJC_IVAR_$_PKArchiveProduct._productVersion
_OBJC_IVAR_$_PKArchiveProduct._scriptsPath
_OBJC_IVAR_$_PKArchiveSignature._verifyTrustRef
_OBJC_IVAR_$_PKArchiveSigner._algorithmType
_OBJC_IVAR_$_PKArchiveSigner._encoder
_OBJC_IVAR_$_PKArchiveSigner._privateKeyRef
_OBJC_IVAR_$_PKArchiveSigner._signatureSize
_OBJC_IVAR_$_PKArchiveSigner._signing_context
_OBJC_IVAR_$_PKArchiveSigner._tsaContext
_OBJC_IVAR_$_PKBOM._BOMBom
_OBJC_IVAR_$_PKBOM._bomData
_OBJC_IVAR_$_PKBOMDirectoryEnumerator._be
_OBJC_IVAR_$_PKBOMDirectoryEnumerator._currentFSO
_OBJC_IVAR_$_PKBOMDirectoryEnumerator._pkBom
_OBJC_IVAR_$_PKBundleComponent._bundlePath
_OBJC_IVAR_$_PKBundleComponent._bundleVersion
_OBJC_IVAR_$_PKBundleComponent._onDisk
_OBJC_IVAR_$_PKBundleComponent._overwriteAction
_OBJC_IVAR_$_PKBundleComponent._storageType
_OBJC_IVAR_$_PKBundleComponentVersion._buildVersion
_OBJC_IVAR_$_PKBundleComponentVersion._bundleVersion
_OBJC_IVAR_$_PKBundleComponentVersion._isOnDisk
_OBJC_IVAR_$_PKBundleComponentVersion._origBundleVersion
_OBJC_IVAR_$_PKBundleComponentVersion._origShortVersionString
_OBJC_IVAR_$_PKBundleComponentVersion._shortVersionString
_OBJC_IVAR_$_PKBundleComponentVersion._sourceVersion
_OBJC_IVAR_$_PKBundleStorage._identifier
_OBJC_IVAR_$_PKBundleStorage._path
_OBJC_IVAR_$_PKBundleStorage._storageType
_OBJC_IVAR_$_PKBundleStorage._versionAttributes
_OBJC_IVAR_$_PKCleanEFWCacheInstallOperation._cacheTool
_OBJC_IVAR_$_PKComponent._deferredInstallPaths
_OBJC_IVAR_$_PKComponent._doNotObsoletePaths
_OBJC_IVAR_$_PKComponent._doNotObsoletePrefixes
_OBJC_IVAR_$_PKComponent._pathToPatchInfoDictionary
_OBJC_IVAR_$_PKComponent._pathToRequiredFilesDictionary
_OBJC_IVAR_$_PKComponent._scriptsDictionary
_OBJC_IVAR_$_PKComponent.destinationPath
_OBJC_IVAR_$_PKComponent.identifier
_OBJC_IVAR_$_PKComponent.package
_OBJC_IVAR_$_PKComponent.prefixPath
_OBJC_IVAR_$_PKComponent.relocatable
_OBJC_IVAR_$_PKComponent.strictIdentifier
_OBJC_IVAR_$_PKComponent.subpaths
_OBJC_IVAR_$_PKComponent.version
_OBJC_IVAR_$_PKComponent.versionChecked
_OBJC_IVAR_$_PKDYLDCacheInstallOperation._currentTask
_OBJC_IVAR_$_PKDYLDCacheInstallOperation._inSandbox
_OBJC_IVAR_$_PKDeferredInstallManager._destinationPath
_OBJC_IVAR_$_PKDeferredInstallManager._rootPath
_OBJC_IVAR_$_PKDeferredInstallManager._scriptPath
_OBJC_IVAR_$_PKDistribution._choicesByIdentifier
_OBJC_IVAR_$_PKDistribution._choicesUpdateQueue
_OBJC_IVAR_$_PKDistribution._pkgRefsByIdentifier
_OBJC_IVAR_$_PKDistribution._pkgRefsInOrder
_OBJC_IVAR_$_PKDistribution._pkgRefsUpdateQueue
_OBJC_IVAR_$_PKDistribution._stringsDictionaryByLocalization
_OBJC_IVAR_$_PKDistribution._xmlDocument
_OBJC_IVAR_$_PKDistributionChoice._choiceElements
_OBJC_IVAR_$_PKDistributionChoice._distribution
_OBJC_IVAR_$_PKDistributionChoice._identifier
_OBJC_IVAR_$_PKDistributionChoice._pkgRefIdentifiers
_OBJC_IVAR_$_PKDistributionChoice._pkgRefIdentifiersUpdateQueue
_OBJC_IVAR_$_PKDistributionChoice._referencingElement
_OBJC_IVAR_$_PKDistributionContainer._distribution
_OBJC_IVAR_$_PKDistributionPackageReference._distribution
_OBJC_IVAR_$_PKDistributionPackageReference._pkgRefElements
_OBJC_IVAR_$_PKDistributionPackageReference._pkgRefIdentifier
_OBJC_IVAR_$_PKDistributionScript._addToParent
_OBJC_IVAR_$_PKDistributionScript._node
_OBJC_IVAR_$_PKDistributionScript._useParentAsScriptParent
_OBJC_IVAR_$_PKDownload._delegate
_OBJC_IVAR_$_PKDownload._deleteFileOnFailure
_OBJC_IVAR_$_PKDownload._dstPath
_OBJC_IVAR_$_PKDownload._overwriteIfFileExists
_OBJC_IVAR_$_PKDownloader._checksumTracker
_OBJC_IVAR_$_PKDownloader._delegate
_OBJC_IVAR_$_PKDownloader._downloadTracker
_OBJC_IVAR_$_PKDownloader._isQueueRunning
_OBJC_IVAR_$_PKDownloader._progressTimer
_OBJC_IVAR_$_PKDownloader._queue
_OBJC_IVAR_$_PKDownloader._stopNotificationPending
_OBJC_IVAR_$_PKDownloaderQueue._active
_OBJC_IVAR_$_PKDownloaderQueue._dequeuedProgressIncrement
_OBJC_IVAR_$_PKDownloaderQueue._maxConcurrentDownloadCount
_OBJC_IVAR_$_PKDownloaderQueue._progressDerating
_OBJC_IVAR_$_PKDownloaderQueue._progressPercentage
_OBJC_IVAR_$_PKDownloaderQueue._queue
_OBJC_IVAR_$_PKDownloaderQueue._sizeDequeued
_OBJC_IVAR_$_PKDownloaderQueue._sizeDownloaded
_OBJC_IVAR_$_PKDownloaderQueue._sizeToCheck
_OBJC_IVAR_$_PKDownloaderQueue._sizeToDownload
_OBJC_IVAR_$_PKDownloaderQueue._totalSizeQueued
_OBJC_IVAR_$_PKDownloaderQueueElement._checksummedBytes
_OBJC_IVAR_$_PKDownloaderQueueElement._destination
_OBJC_IVAR_$_PKDownloaderQueueElement._download
_OBJC_IVAR_$_PKDownloaderQueueElement._downloadedBytes
_OBJC_IVAR_$_PKDownloaderQueueElement._packageRef
_OBJC_IVAR_$_PKDownloaderQueueElement._progressIncrement
_OBJC_IVAR_$_PKDownloaderSpeedTracker._averageBytesPerSecond
_OBJC_IVAR_$_PKDownloaderSpeedTracker._bytesAtLastUpdate
_OBJC_IVAR_$_PKDownloaderSpeedTracker._bytesSinceQueueStart
_OBJC_IVAR_$_PKDownloaderSpeedTracker._queueStartTime
_OBJC_IVAR_$_PKExtendedAttribute._name
_OBJC_IVAR_$_PKExtendedAttribute._value
_OBJC_IVAR_$_PKExtendedAttributeEnumerator._currentByteOffset
_OBJC_IVAR_$_PKExtendedAttributeEnumerator._currentName
_OBJC_IVAR_$_PKExtendedAttributeEnumerator._nameBuffer
_OBJC_IVAR_$_PKExtendedAttributeEnumerator._nameBufferSize
_OBJC_IVAR_$_PKExtendedAttributeEnumerator._options
_OBJC_IVAR_$_PKExtendedAttributeEnumerator._path
_OBJC_IVAR_$_PKExtractInstallOperation._activeExtractor
_OBJC_IVAR_$_PKExtractInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKExtractInstallOperation._informedExtractionSpeed
_OBJC_IVAR_$_PKExtractInstallOperation._payloadBytesCompleted
_OBJC_IVAR_$_PKExtractInstallOperation._totalPayloadSize
_OBJC_IVAR_$_PKExtractInstallOperation._updateQueue
_OBJC_IVAR_$_PKFileDownload._bytesDownloaded
_OBJC_IVAR_$_PKFileDownload._fileReadThread
_OBJC_IVAR_$_PKFileDownload._isResume
_OBJC_IVAR_$_PKFileDownload._readFileDescriptor
_OBJC_IVAR_$_PKFileDownload._runFileReadThread
_OBJC_IVAR_$_PKFileDownload._srcPath
_OBJC_IVAR_$_PKFileDownload._writeFileDescriptor
_OBJC_IVAR_$_PKFlatDistributionContainer._path
_OBJC_IVAR_$_PKFolderArchive._archivePath
_OBJC_IVAR_$_PKFolderArchiveProduct._archive
_OBJC_IVAR_$_PKFolderArchiveProduct._distribution
_OBJC_IVAR_$_PKFolderArchiveSignature._staticCode
_OBJC_IVAR_$_PKInstall._clientSideRegistrationPaths
_OBJC_IVAR_$_PKInstall._delegate
_OBJC_IVAR_$_PKInstall._error
_OBJC_IVAR_$_PKInstall._installAnalyzer
_OBJC_IVAR_$_PKInstall._installController
_OBJC_IVAR_$_PKInstall._installControllerUpdateQueue
_OBJC_IVAR_$_PKInstall._installRequest
_OBJC_IVAR_$_PKInstall._installSandbox
_OBJC_IVAR_$_PKInstall._installState
_OBJC_IVAR_$_PKInstall._isCancelled
_OBJC_IVAR_$_PKInstall._isDone
_OBJC_IVAR_$_PKInstallAnalyzer._atomicallyObsoleteBundles
_OBJC_IVAR_$_PKInstallAnalyzer._bundleIdentToXATTRMap
_OBJC_IVAR_$_PKInstallAnalyzer._bundlePathToComponentMap
_OBJC_IVAR_$_PKInstallAnalyzer._contentCachingPaths
_OBJC_IVAR_$_PKInstallAnalyzer._deferredInstallPaths
_OBJC_IVAR_$_PKInstallAnalyzer._installRequest
_OBJC_IVAR_$_PKInstallAnalyzer._kextPathCount
_OBJC_IVAR_$_PKInstallAnalyzer._maskPathsByPackageSpecifier
_OBJC_IVAR_$_PKInstallAnalyzer._obsoletedFiles
_OBJC_IVAR_$_PKInstallAnalyzer._potentiallyObsoleteDirectories
_OBJC_IVAR_$_PKInstallAnalyzer._registrationPaths
_OBJC_IVAR_$_PKInstallAnalyzer._skipComponentsByPackageSpecifier
_OBJC_IVAR_$_PKInstallAnalyzer._systemLibraryCount
_OBJC_IVAR_$_PKInstallAnalyzer._xpcCachePathCount
_OBJC_IVAR_$_PKInstallClient._conn
_OBJC_IVAR_$_PKInstallClient._delegate
_OBJC_IVAR_$_PKInstallClient._delegateWantsUpdates
_OBJC_IVAR_$_PKInstallClient._installRequest
_OBJC_IVAR_$_PKInstallClient._installToken
_OBJC_IVAR_$_PKInstallClient._isInitialized
_OBJC_IVAR_$_PKInstallClient._isRegistering
_OBJC_IVAR_$_PKInstallClient._lastProgress
_OBJC_IVAR_$_PKInstallClient._statusTimer
_OBJC_IVAR_$_PKInstallCommitManager._assertionID
_OBJC_IVAR_$_PKInstallCommitManager._backupTimerSource
_OBJC_IVAR_$_PKInstallCommitManager._installRequest
_OBJC_IVAR_$_PKInstallCommitManager._monitorTask
_OBJC_IVAR_$_PKInstallCommitManager._pidPath
_OBJC_IVAR_$_PKInstallCommitManager._suspendedSpotlight
_OBJC_IVAR_$_PKInstallDaemon._clientNotifyQueue
_OBJC_IVAR_$_PKInstallDaemon._clients
_OBJC_IVAR_$_PKInstallDaemon._connectionName
_OBJC_IVAR_$_PKInstallDaemon._currentToken
_OBJC_IVAR_$_PKInstallDaemon._daemonState
_OBJC_IVAR_$_PKInstallDaemon._idleCount
_OBJC_IVAR_$_PKInstallDaemon._listener
_OBJC_IVAR_$_PKInstallDaemon._queueQueue
_OBJC_IVAR_$_PKInstallDaemon._serviceQueue
_OBJC_IVAR_$_PKInstallDaemon._stateQueue
_OBJC_IVAR_$_PKInstallDaemon._tokenQueue
_OBJC_IVAR_$_PKInstallDaemon._tokenToDoneBlockDictionary
_OBJC_IVAR_$_PKInstallDaemon._tokenToInstallDictionary
_OBJC_IVAR_$_PKInstallDaemon._tokenToQualityOfServiceClassDictionary
_OBJC_IVAR_$_PKInstallDaemon._validatedAuthorizations
_OBJC_IVAR_$_PKInstallDaemonClient._clientAuditIdentifier
_OBJC_IVAR_$_PKInstallDaemonClient._clientPID
_OBJC_IVAR_$_PKInstallDaemonClient._clientPath
_OBJC_IVAR_$_PKInstallDaemonClient._clientQueue
_OBJC_IVAR_$_PKInstallDaemonClient._clientUID
_OBJC_IVAR_$_PKInstallDaemonClient._connection
_OBJC_IVAR_$_PKInstallDaemonClient._outstandingInstallTokens
_OBJC_IVAR_$_PKInstallHistory._path
_OBJC_IVAR_$_PKInstallManifest._actualPathByBundleIdentifier
_OBJC_IVAR_$_PKInstallManifest._defaultPathByBundleIdentifier
_OBJC_IVAR_$_PKInstallManifest._downgradePathByBundleIdentifier
_OBJC_IVAR_$_PKInstallManifest._installAnalyzer
_OBJC_IVAR_$_PKInstallManifest._installRequest
_OBJC_IVAR_$_PKInstallManifest._topBundleIdentifiers
_OBJC_IVAR_$_PKInstallManifest._versionByBundleIdentifier
_OBJC_IVAR_$_PKInstallOperation._analyzer
_OBJC_IVAR_$_PKInstallOperation._error
_OBJC_IVAR_$_PKInstallOperation._originalEstimate
_OBJC_IVAR_$_PKInstallOperation._packageStartDate
_OBJC_IVAR_$_PKInstallOperation._request
_OBJC_IVAR_$_PKInstallOperation._sandbox
_OBJC_IVAR_$_PKInstallOperation._startDate
_OBJC_IVAR_$_PKInstallOperationController._analyzer
_OBJC_IVAR_$_PKInstallOperationController._dequeuedTime
_OBJC_IVAR_$_PKInstallOperationController._error
_OBJC_IVAR_$_PKInstallOperationController._isCancelled
_OBJC_IVAR_$_PKInstallOperationController._isRunning
_OBJC_IVAR_$_PKInstallOperationController._lastCancellableOp
_OBJC_IVAR_$_PKInstallOperationController._operations
_OBJC_IVAR_$_PKInstallOperationController._queuedTime
_OBJC_IVAR_$_PKInstallOperationController._request
_OBJC_IVAR_$_PKInstallOperationController._trackingHistory
_OBJC_IVAR_$_PKInstallOperationController._updateQueue
_OBJC_IVAR_$_PKInstallRequest._appPlaceholderPath
_OBJC_IVAR_$_PKInstallRequest._appStoreReceiptData
_OBJC_IVAR_$_PKInstallRequest._authorizationEnvironment
_OBJC_IVAR_$_PKInstallRequest._certificateChain
_OBJC_IVAR_$_PKInstallRequest._clientBlocksRestart
_OBJC_IVAR_$_PKInstallRequest._clientBootstrapPort
_OBJC_IVAR_$_PKInstallRequest._clientGID
_OBJC_IVAR_$_PKInstallRequest._clientProcessName
_OBJC_IVAR_$_PKInstallRequest._clientSecuritySessionPort
_OBJC_IVAR_$_PKInstallRequest._clientUID
_OBJC_IVAR_$_PKInstallRequest._defaultAuthorization
_OBJC_IVAR_$_PKInstallRequest._destinationPath
_OBJC_IVAR_$_PKInstallRequest._didPassPreflight
_OBJC_IVAR_$_PKInstallRequest._evaluatedTrustLevel
_OBJC_IVAR_$_PKInstallRequest._frameworkVersion
_OBJC_IVAR_$_PKInstallRequest._hasValidTrustLevel
_OBJC_IVAR_$_PKInstallRequest._ignoreIndexBom
_OBJC_IVAR_$_PKInstallRequest._installSandboxName
_OBJC_IVAR_$_PKInstallRequest._internalBundleVersionChecking
_OBJC_IVAR_$_PKInstallRequest._isOSInstall
_OBJC_IVAR_$_PKInstallRequest._isRecursive
_OBJC_IVAR_$_PKInstallRequest._loggingIdentifier
_OBJC_IVAR_$_PKInstallRequest._masterBOMPath
_OBJC_IVAR_$_PKInstallRequest._minTrustLevel
_OBJC_IVAR_$_PKInstallRequest._openScripts
_OBJC_IVAR_$_PKInstallRequest._overrideAuthorization
_OBJC_IVAR_$_PKInstallRequest._packageExtractorSpeed
_OBJC_IVAR_$_PKInstallRequest._packageSpecifiers
_OBJC_IVAR_$_PKInstallRequest._restartAction
_OBJC_IVAR_$_PKInstallRequest._scriptTargetVolume
_OBJC_IVAR_$_PKInstallRequest._spaceRequiredForInstall
_OBJC_IVAR_$_PKInstallRequest._stageRequest
_OBJC_IVAR_$_PKInstallRequest._trustRef
_OBJC_IVAR_$_PKInstallRequest._untrustedEnvironment
_OBJC_IVAR_$_PKInstallRequest._useAFSCByDefault
_OBJC_IVAR_$_PKInstallRequest._useForegroundPriorityForStaging
_OBJC_IVAR_$_PKInstallSandbox._bomPathsByPackageSpecifier
_OBJC_IVAR_$_PKInstallSandbox._cleanupPaths
_OBJC_IVAR_$_PKInstallSandbox._installRequest
_OBJC_IVAR_$_PKInstallSandbox._relevance
_OBJC_IVAR_$_PKInstallSandbox._restrictedRootManifestPathsByPackageSpecifier
_OBJC_IVAR_$_PKInstallSandbox._sandboxPath
_OBJC_IVAR_$_PKInstallSandbox._scriptDirsByPackageSpecifier
_OBJC_IVAR_$_PKInstallSandbox._scriptsAttributes
_OBJC_IVAR_$_PKInstallSandbox._scriptsPath
_OBJC_IVAR_$_PKInstallSandbox._stageDate
_OBJC_IVAR_$_PKInstallSandbox._stagedSize
_OBJC_IVAR_$_PKInstallSandbox._temporaryAttributes
_OBJC_IVAR_$_PKInstallSandbox._temporaryPath
_OBJC_IVAR_$_PKInstallSandboxManager._repoQueue
_OBJC_IVAR_$_PKInstallSandboxManager._sandboxRemoveQueue
_OBJC_IVAR_$_PKInstallTask._logPrefix
_OBJC_IVAR_$_PKInstallTask._outputReadHandle
_OBJC_IVAR_$_PKInstallTask._partialLine
_OBJC_IVAR_$_PKInstallTask._task
_OBJC_IVAR_$_PKInstallableObject._archive
_OBJC_IVAR_$_PKInstallableObject._cachedBomDatas
_OBJC_IVAR_$_PKInstallableObject._cachedCertificates
_OBJC_IVAR_$_PKInstallableObject._cachedReferences
_OBJC_IVAR_$_PKInstallableObject._package
_OBJC_IVAR_$_PKInstallableObject._product
_OBJC_IVAR_$_PKInstallableObject._url
_OBJC_IVAR_$_PKJaguarPackage._bundle
_OBJC_IVAR_$_PKMutableDistributionContainer._error
_OBJC_IVAR_$_PKMutablePackage._baselineNameMapper
_OBJC_IVAR_$_PKMutablePackage._baselinePayloadRoot
_OBJC_IVAR_$_PKMutablePackage._maskExpressions
_OBJC_IVAR_$_PKMutablePackage._onDiskComponents
_OBJC_IVAR_$_PKMutablePackage._ownershipModifier
_OBJC_IVAR_$_PKMutablePackage._payloadRoot
_OBJC_IVAR_$_PKMutablePackage._scriptRoot
_OBJC_IVAR_$_PKMutableReceipt._bomData
_OBJC_IVAR_$_PKMutableSignedContainer._identity
_OBJC_IVAR_$_PKMutableSignedContainer._intermediateCertificates
_OBJC_IVAR_$_PKMutableSignedContainer._pathsToAdd
_OBJC_IVAR_$_PKMutableSignedContainer._useTSA
_OBJC_IVAR_$_PKMutableXARArchive._mutable
_OBJC_IVAR_$_PKMutableXARArchive._signers
_OBJC_IVAR_$_PKNetEnabledProduct._container
_OBJC_IVAR_$_PKNetEnabledProduct._distributionData
_OBJC_IVAR_$_PKNetEnabledProduct._fromContainer
_OBJC_IVAR_$_PKNetEnabledProduct._fromDistribution
_OBJC_IVAR_$_PKNetEnabledProduct._productInfo
_OBJC_IVAR_$_PKNetEnabledProduct._resourcePath
_OBJC_IVAR_$_PKNetEnabledProduct._signingDelegate
_OBJC_IVAR_$_PKNetEnabledProduct._url
_OBJC_IVAR_$_PKPackage._archive
_OBJC_IVAR_$_PKPackage._componentMap
_OBJC_IVAR_$_PKPackage._packageInfo
_OBJC_IVAR_$_PKPackage._populatedSubpaths
_OBJC_IVAR_$_PKPackageChecker._checkResults
_OBJC_IVAR_$_PKPackageChecker._checkedAttrs
_OBJC_IVAR_$_PKPackageChecker._componentMap
_OBJC_IVAR_$_PKPackageChecker._contentPath
_OBJC_IVAR_$_PKPackageChecker._packageInfo
_OBJC_IVAR_$_PKPackageInfo._XMLDocument
_OBJC_IVAR_$_PKPackageReference._baseURL
_OBJC_IVAR_$_PKPackageReference._dictionary
_OBJC_IVAR_$_PKPackageRequirements._actualPathByComponentIdent
_OBJC_IVAR_$_PKPackageRequirements._destinationPath
_OBJC_IVAR_$_PKPackageRequirements._identifier
_OBJC_IVAR_$_PKPackageRequirements._onDiskHashCache
_OBJC_IVAR_$_PKPackageSourceManager._invalidatedPackageReferencesToReasonDict
_OBJC_IVAR_$_PKPackageSourceManager._packageSourceDistances
_OBJC_IVAR_$_PKPackageSourceManager._packageSources
_OBJC_IVAR_$_PKPackageSourceManager._queryLock
_OBJC_IVAR_$_PKPackageSourceManager._refToDistanceCache
_OBJC_IVAR_$_PKPackageSpecifier._authLevel
_OBJC_IVAR_$_PKPackageSpecifier._destinationPath
_OBJC_IVAR_$_PKPackageSpecifier._displayName
_OBJC_IVAR_$_PKPackageSpecifier._displayVersion
_OBJC_IVAR_$_PKPackageSpecifier._externalRootPath
_OBJC_IVAR_$_PKPackageSpecifier._installPathByComponentIdent
_OBJC_IVAR_$_PKPackageSpecifier._options
_OBJC_IVAR_$_PKPackageSpecifier._package
_OBJC_IVAR_$_PKPackageSpecifier._packageReference
_OBJC_IVAR_$_PKPackageSpecifier._packageUniqueHash
_OBJC_IVAR_$_PKPackageSpecifier._prefixPath
_OBJC_IVAR_$_PKPackageSpecifier._requirements
_OBJC_IVAR_$_PKPackageSpecifier._resolvedPathByComponentIdent
_OBJC_IVAR_$_PKPackageSpecifier._userPathByComponentIdent
_OBJC_IVAR_$_PKPatchAndUpdateInstallOperation._bomCopier
_OBJC_IVAR_$_PKPatchAndUpdateInstallOperation._bomCopierOptions
_OBJC_IVAR_$_PKPatchAndUpdateInstallOperation._bomSys
_OBJC_IVAR_$_PKPatchAndUpdateInstallOperation._patchAndUpdateSizeCompleted
_OBJC_IVAR_$_PKPatchAndUpdateInstallOperation._totalPatchAndUpdateSize
_OBJC_IVAR_$_PKPatchFilesInstallOperation._compressionQueue
_OBJC_IVAR_$_PKPatchFilesInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKPatchFilesInstallOperation._useAFSCByDefault
_OBJC_IVAR_$_PKPayloadCopier._bomCopier
_OBJC_IVAR_$_PKPayloadCopier._bomCopierOptions
_OBJC_IVAR_$_PKPayloadCopier._bomSys
_OBJC_IVAR_$_PKPayloadCopier._destinationPath
_OBJC_IVAR_$_PKPayloadCopier._didCancel
_OBJC_IVAR_$_PKPayloadCopier._error
_OBJC_IVAR_$_PKPayloadCopier._fullCompleteBytes
_OBJC_IVAR_$_PKPayloadCopier._fullCompleteCount
_OBJC_IVAR_$_PKPayloadCopier._isDestinationArchive
_OBJC_IVAR_$_PKPayloadCopier._isExecuting
_OBJC_IVAR_$_PKPayloadCopier._itemCopiedHandler
_OBJC_IVAR_$_PKPayloadCopier._itemCopiedQueue
_OBJC_IVAR_$_PKPayloadCopier._itemWillCopyHandler
_OBJC_IVAR_$_PKPayloadCopier._maskPaths
_OBJC_IVAR_$_PKPayloadCopier._offset
_OBJC_IVAR_$_PKPayloadCopier._partialFileLength
_OBJC_IVAR_$_PKPayloadCopier._payloadFormat
_OBJC_IVAR_$_PKPayloadCopier._payloadSize
_OBJC_IVAR_$_PKPayloadCopier._sourcePath
_OBJC_IVAR_$_PKPayloadCopier._updateQueue
_OBJC_IVAR_$_PKPrepareForCommitInstallOperation._manager
_OBJC_IVAR_$_PKProduct._certificateChain
_OBJC_IVAR_$_PKProduct._evaluatedTrustLevel
_OBJC_IVAR_$_PKProduct._minTrustLevel
_OBJC_IVAR_$_PKProduct._trustRef
_OBJC_IVAR_$_PKProductArchiver._baselineNameMapper
_OBJC_IVAR_$_PKProductArchiver._baselineUnarchivedProduct
_OBJC_IVAR_$_PKProductArchiver._copyOwnershipFromOriginalBom
_OBJC_IVAR_$_PKProductArchiver._overrideDistribution
_OBJC_IVAR_$_PKProductArchiver._productPath
_OBJC_IVAR_$_PKProductChecker._allowExternalPackages
_OBJC_IVAR_$_PKProductChecker._checkResults
_OBJC_IVAR_$_PKProductChecker._checkedFileAttributes
_OBJC_IVAR_$_PKProductChecker._contentPath
_OBJC_IVAR_$_PKProductChecker._distribution
_OBJC_IVAR_$_PKProductChecker._interfaceType
_OBJC_IVAR_$_PKProductChecker._interfaceTypeRequired
_OBJC_IVAR_$_PKProductInfo._baseURL
_OBJC_IVAR_$_PKProductInfo._cachedPackageReferences
_OBJC_IVAR_$_PKProductInfo._productInfoDictionary
_OBJC_IVAR_$_PKProductUnarchiver._preserveExtAttrsAndACLs
_OBJC_IVAR_$_PKProductUnarchiver._productArchive
_OBJC_IVAR_$_PKProductUnarchiver._useIndexBom
_OBJC_IVAR_$_PKReceipt._bomPath
_OBJC_IVAR_$_PKReceipt._bundlePath
_OBJC_IVAR_$_PKReceipt._cachedBOM
_OBJC_IVAR_$_PKReceipt._isSecure
_OBJC_IVAR_$_PKReceipt._receiptDictionary
_OBJC_IVAR_$_PKRelocateComponentsInstallOperation._currentNewBundlePath
_OBJC_IVAR_$_PKRelocateComponentsInstallOperation._currentOldBundlePath
_OBJC_IVAR_$_PKRelocateComponentsInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKRunPackageScriptInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKRunPackageScriptInstallOperation._original_bootstrap_port
_OBJC_IVAR_$_PKRunPackageScriptInstallOperation._original_security_session_port
_OBJC_IVAR_$_PKRunPackageScriptInstallOperation._scriptType
_OBJC_IVAR_$_PKScript._estimatedRunningTime
_OBJC_IVAR_$_PKScript._path
_OBJC_IVAR_$_PKSecureNetEnabledProduct._archivePath
_OBJC_IVAR_$_PKSecureNetEnabledProduct._distArchive
_OBJC_IVAR_$_PKSecureNetEnabledProduct._tempArchivePath
_OBJC_IVAR_$_PKSignedContainer._archive
_OBJC_IVAR_$_PKSignedContainer._metadata
_OBJC_IVAR_$_PKSignedContainer._performsAssessment
_OBJC_IVAR_$_PKSigningIdentity._identity
_OBJC_IVAR_$_PKSigningIdentity._keychainSpec
_OBJC_IVAR_$_PKSigningIdentity._supportingCerts
_OBJC_IVAR_$_PKStreamingProduct._archive
_OBJC_IVAR_$_PKStreamingProduct._path
_OBJC_IVAR_$_PKStreamingProduct._state
_OBJC_IVAR_$_PKStreamingProduct._underlyingProduct
_OBJC_IVAR_$_PKStreamingXARArchive._streamingState
_OBJC_IVAR_$_PKStreamingXARArchive._underlyingArchiveFileHandle
_OBJC_IVAR_$_PKStreamingXARArchive._underlyingArchiveFileName
_OBJC_IVAR_$_PKTrust._appleRootMode
_OBJC_IVAR_$_PKTrust._policyRef
_OBJC_IVAR_$_PKTrust._signingDate
_OBJC_IVAR_$_PKTrust._signingDateIsTrusted
_OBJC_IVAR_$_PKTrust._trustLevel
_OBJC_IVAR_$_PKTrust._trustRef
_OBJC_IVAR_$_PKTrust._trustResult
_OBJC_IVAR_$_PKURLDownload._urlDownload
_OBJC_IVAR_$_PKUpdateEFWCacheInstallOperation._cacheTool
_OBJC_IVAR_$_PKVerifyMASPayloadInstallOperation._appStoreStage
_OBJC_IVAR_$_PKVerifyMASPayloadInstallOperation._atomicUpdate
_OBJC_IVAR_$_PKVerifyMASPayloadInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKWriteMASReceiptInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKWriteReceiptsInstallOperation._currentPackageSpecifier
_OBJC_IVAR_$_PKWriteReceiptsInstallOperation._inSandbox
_OBJC_IVAR_$_PKXARArchive._archivePath
_OBJC_IVAR_$_PKXARArchive._skipsVerify
_OBJC_IVAR_$_PKXARArchive._xarPtr
_OBJC_IVAR_$_PKXARArchiveSignature._sig
_OBJC_IVAR_$_PKXPCCacheInstallOperation._currentTask
_OBJC_IVAR_$_PKXPCCacheInstallOperation._inSandbox
_OBJC_IVAR_$_XARDirectoryEnumerator._basePath
_OBJC_IVAR_$_XARDirectoryEnumerator._current_xar_file
_OBJC_IVAR_$_XARDirectoryEnumerator._didPeek
_OBJC_IVAR_$_XARDirectoryEnumerator._isDone
_OBJC_IVAR_$_XARDirectoryEnumerator._xar
_OBJC_IVAR_$_XARDirectoryEnumerator._xar_iter
_OBJC_IVAR_$__PKCheckErrorRecoveryAttempter._action
_OBJC_IVAR_$__PKInstallClientConnection._blockingProxy
_OBJC_IVAR_$__PKInstallClientConnection._connection
_OBJC_IVAR_$__PKInstallClientConnection._proxy
_OBJC_IVAR_$__PKInstallClientConnection._sema
_OBJC_IVAR_$__PKPackageCreationFileDigest._digest
_OBJC_IVAR_$__PKPackageCreationFileDigest._path
_OBJC_IVAR_$__PKSignedContainerCopyCancelHandler._copier
_OBJC_IVAR_$__PKSignedContainerCopyCancelHandler._isCancelled
_OBJC_IVAR_$__PKSignedContainerCopyCancelHandler._syncQueue
_OBJC_IVAR_$__PKURLConnectionDelegate.data
_OBJC_IVAR_$__PKURLConnectionDelegate.notifyBlock
_OBJC_IVAR_$__PKURLConnectionDelegate.notifyQueue
_OBJC_IVAR_$__PKURLConnectionDelegate.response
_OBJC_METACLASS_$_PKAddExtendedAttributesInstallOperation
_OBJC_METACLASS_$_PKAddRestrictedRootFlagInstallOperation
_OBJC_METACLASS_$_PKArchive
_OBJC_METACLASS_$_PKArchiveDistributionContainer
_OBJC_METACLASS_$_PKArchiveProduct
_OBJC_METACLASS_$_PKArchiveSignature
_OBJC_METACLASS_$_PKArchiveSigner
_OBJC_METACLASS_$_PKBOM
_OBJC_METACLASS_$_PKBOMDirectoryEnumerator
_OBJC_METACLASS_$_PKBundleComponent
_OBJC_METACLASS_$_PKBundleComponentVersion
_OBJC_METACLASS_$_PKBundleStorage
_OBJC_METACLASS_$_PKCFBundleStorage
_OBJC_METACLASS_$_PKCheckError
_OBJC_METACLASS_$_PKCleanEFWCacheInstallOperation
_OBJC_METACLASS_$_PKComponent
_OBJC_METACLASS_$_PKDYLDCacheInstallOperation
_OBJC_METACLASS_$_PKDataSizeFormatter
_OBJC_METACLASS_$_PKDataSizeValueTransformer
_OBJC_METACLASS_$_PKDeferredInstallManager
_OBJC_METACLASS_$_PKDistribution
_OBJC_METACLASS_$_PKDistributionChoice
_OBJC_METACLASS_$_PKDistributionContainer
_OBJC_METACLASS_$_PKDistributionPackageReference
_OBJC_METACLASS_$_PKDistributionScript
_OBJC_METACLASS_$_PKDownload
_OBJC_METACLASS_$_PKDownloader
_OBJC_METACLASS_$_PKDownloaderQueue
_OBJC_METACLASS_$_PKDownloaderQueueElement
_OBJC_METACLASS_$_PKDownloaderSpeedTracker
_OBJC_METACLASS_$_PKExtendedAttribute
_OBJC_METACLASS_$_PKExtendedAttributeEnumerator
_OBJC_METACLASS_$_PKExtractInstallOperation
_OBJC_METACLASS_$_PKFileDownload
_OBJC_METACLASS_$_PKFlatDistributionContainer
_OBJC_METACLASS_$_PKFolderArchive
_OBJC_METACLASS_$_PKFolderArchiveProduct
_OBJC_METACLASS_$_PKFolderArchiveSignature
_OBJC_METACLASS_$_PKInstall
_OBJC_METACLASS_$_PKInstallAnalyzer
_OBJC_METACLASS_$_PKInstallClient
_OBJC_METACLASS_$_PKInstallCommitManager
_OBJC_METACLASS_$_PKInstallDaemon
_OBJC_METACLASS_$_PKInstallDaemonClient
_OBJC_METACLASS_$_PKInstallError
_OBJC_METACLASS_$_PKInstallHistory
_OBJC_METACLASS_$_PKInstallManifest
_OBJC_METACLASS_$_PKInstallOperation
_OBJC_METACLASS_$_PKInstallOperationController
_OBJC_METACLASS_$_PKInstallRequest
_OBJC_METACLASS_$_PKInstallSandbox
_OBJC_METACLASS_$_PKInstallSandboxManager
_OBJC_METACLASS_$_PKInstallStateHelper
_OBJC_METACLASS_$_PKInstallTask
_OBJC_METACLASS_$_PKInstallableObject
_OBJC_METACLASS_$_PKJaguarPackage
_OBJC_METACLASS_$_PKKextCacheInstallOperation
_OBJC_METACLASS_$_PKLSRegisterInstallOperation
_OBJC_METACLASS_$_PKLeopardPackage
_OBJC_METACLASS_$_PKMachOWithInfoPlistBundleStorage
_OBJC_METACLASS_$_PKMutableArchive
_OBJC_METACLASS_$_PKMutableBOM
_OBJC_METACLASS_$_PKMutableDistributionContainer
_OBJC_METACLASS_$_PKMutableLeopardPackage
_OBJC_METACLASS_$_PKMutablePackage
_OBJC_METACLASS_$_PKMutableProduct
_OBJC_METACLASS_$_PKMutableReceipt
_OBJC_METACLASS_$_PKMutableSignedContainer
_OBJC_METACLASS_$_PKMutableXARArchive
_OBJC_METACLASS_$_PKNetEnabledProduct
_OBJC_METACLASS_$_PKObsoletionInstallOperation
_OBJC_METACLASS_$_PKPackage
_OBJC_METACLASS_$_PKPackageChecker
_OBJC_METACLASS_$_PKPackageInfo
_OBJC_METACLASS_$_PKPackageReference
_OBJC_METACLASS_$_PKPackageRequirements
_OBJC_METACLASS_$_PKPackageSourceManager
_OBJC_METACLASS_$_PKPackageSpecifier
_OBJC_METACLASS_$_PKPatchAndUpdateInstallOperation
_OBJC_METACLASS_$_PKPatchFilesInstallOperation
_OBJC_METACLASS_$_PKPayloadCopier
_OBJC_METACLASS_$_PKPrepareDiskInstallOperation
_OBJC_METACLASS_$_PKPrepareForCommitInstallOperation
_OBJC_METACLASS_$_PKProduct
_OBJC_METACLASS_$_PKProductArchiver
_OBJC_METACLASS_$_PKProductChecker
_OBJC_METACLASS_$_PKProductInfo
_OBJC_METACLASS_$_PKProductUnarchiver
_OBJC_METACLASS_$_PKReceipt
_OBJC_METACLASS_$_PKRelocateComponentsInstallOperation
_OBJC_METACLASS_$_PKRunPackageScriptInstallOperation
_OBJC_METACLASS_$_PKSafariExtensionBundleStorage
_OBJC_METACLASS_$_PKScript
_OBJC_METACLASS_$_PKSecureNetEnabledProduct
_OBJC_METACLASS_$_PKSetupDeferredInstallOperation
_OBJC_METACLASS_$_PKShoveInstallOperation
_OBJC_METACLASS_$_PKSignedContainer
_OBJC_METACLASS_$_PKSigningIdentity
_OBJC_METACLASS_$_PKStreamingProduct
_OBJC_METACLASS_$_PKStreamingXARArchive
_OBJC_METACLASS_$_PKTimeRemainingFormatter
_OBJC_METACLASS_$_PKTimeRemainingValueTransformer
_OBJC_METACLASS_$_PKTrust
_OBJC_METACLASS_$_PKTrustAdditions
_OBJC_METACLASS_$_PKURLConnection
_OBJC_METACLASS_$_PKURLDownload
_OBJC_METACLASS_$_PKUpdateEFWCacheInstallOperation
_OBJC_METACLASS_$_PKVerifyMASPayloadInstallOperation
_OBJC_METACLASS_$_PKWriteMASReceiptInstallOperation
_OBJC_METACLASS_$_PKWriteReceiptsInstallOperation
_OBJC_METACLASS_$_PKXARArchive
_OBJC_METACLASS_$_PKXARArchiveSignature
_OBJC_METACLASS_$_PKXPCCacheInstallOperation
_OBJC_METACLASS_$_XARDirectoryEnumerator
_OBJC_METACLASS_$__PKCheckErrorRecoveryAttempter
_OBJC_METACLASS_$__PKInstallClientConnection
_OBJC_METACLASS_$__PKPackageCreationFileDigest
_OBJC_METACLASS_$__PKSignedContainerCopyCancelHandler
_OBJC_METACLASS_$__PKURLConnectionDelegate
_PCompressCheckFilterParameters
_PCompressCreateFilterThreads
_PCompressCreateReaderThread
_PCompressCreateWorkerThread
_PCompressCreateWriterThread
_PCompressFilter
_PCompressFilterSeqRead
_PCompressFreeFilterState
_PCompressFreeWorkerThreadParams
_PCompressGetDecoderDescription
_PCompressGetDecoderFilter
_PCompressGetDecoderKey
_PCompressGetEncoderDecoder
_PCompressGetEncoderDescription
_PCompressGetEncoderFilter
_PCompressGetEncoderKey
_PCompressGetResumeBufferSize
_PCompressInitFilterState
_PCompressInitIOThreadParams
_PCompressInitWorkerThreadParams
_PCompressJoinFilterThreads
_PCompressJoinIOThread
_PCompressJoinWorkerThread
_PCompressLZ4Decode
_PCompressLZ4Encode
_PCompressLZ4HCEncode
_PCompressLZMA6Encode
_PCompressLZMADecode
_PCompressLZVNDecode
_PCompressLZVNEncode
_PCompressProcessFileHeader
_PCompressRead
_PCompressReadFromResumeBuffer
_PCompressReadWithState
_PCompressReaderThreadProc
_PCompressSemAcquire
_PCompressSemDestroy
_PCompressSemInit
_PCompressSemRelease
_PCompressThreadAttrInit
_PCompressUnreadToResumeBuffer
_PCompressWorkerThreadProc
_PCompressWrite
_PCompressWriterThreadProc
_PCompressZLIB5Encode
_PCompressZLIB9Encode
_PCompressZLIBDecode
_PKArchiveFolderFileType
_PKArchiveSignatureTypeCMS
_PKArchiveSignatureTypeCodeSign
_PKArchiveSignatureTypeRSA
_PKArchiveXARFileType
_PKBOMCopierBomSysFree
_PKBOMCopierBomSysInit
_PKBundleStorageTypeCFBundle
_PKCheckErrorDomain
_PKComponentPostInstallScript
_PKComponentPreInstallScript
_PKDistributionBackground
_PKDistributionChoiceChecked
_PKDistributionChoiceChildrenKey
_PKDistributionChoiceCustomLocation
_PKDistributionChoiceCustomLocationAllowAlternateVolumes
_PKDistributionChoiceCustomLocationIsSelfContained
_PKDistributionChoiceDescription
_PKDistributionChoiceDescriptionMIMEType
_PKDistributionChoiceEnabled
_PKDistributionChoiceErrorDomain
_PKDistributionChoiceInitialChecked
_PKDistributionChoiceInitialEnabled
_PKDistributionChoiceInitialVisible
_PKDistributionChoiceTitle
_PKDistributionChoiceVersion
_PKDistributionChoiceVisible
_PKDistributionChoicesDidChangeNotification
_PKDistributionConclusion
_PKDistributionDocumentMinSpecVersion
_PKDistributionErrorDomain
_PKDistributionIcon
_PKDistributionLicense
_PKDistributionOptionsAllowExternalScripts
_PKDistributionOptionsCustomize
_PKDistributionOptionsHostArchitectures
_PKDistributionOptionsPredicateOnly
_PKDistributionOptionsRequireJavaScript
_PKDistributionOptionsRootVolumeOnly
_PKDistributionOptionsType
_PKDistributionOptionsTypeConfigData
_PKDistributionOptionsTypeFirmware
_PKDistributionOptionsTypePeripheralFirmware
_PKDistributionOptionsTypeStandard
_PKDistributionPackageActive
_PKDistributionPackageAuthLevel
_PKDistributionPackageErrorDomain
_PKDistributionPackageInstallSize
_PKDistributionPackageMustCloseAppsKey
_PKDistributionPackageReferencesDidChangeNotification
_PKDistributionPackageReferencesKey
_PKDistributionPackageRestartAction
_PKDistributionPackageScriptSuffix
_PKDistributionPackageVersion
_PKDistributionReadme
_PKDistributionResourceContentEncoding
_PKDistributionResourceFilePath
_PKDistributionResourceImageAlignment
_PKDistributionResourceImageScaling
_PKDistributionResourceLanguage
_PKDistributionResourceMIMEType
_PKDistributionResourceUTI
_PKDistributionWatermark
_PKDistributionWelcome
_PKFileSymbolicLinkDestination
_PKInstallErrorDomain
_PKInstallHistoryDefaultFilePath
_PKInstallOperationCanCancelDidChangeNotification
_PKInstallPackageIdentifierKey
_PKInstallRequestItemClientProcessName
_PKInstallRequestItemContentType
_PKInstallRequestItemDate
_PKInstallRequestItemDisplayName
_PKInstallRequestItemDisplayVersion
_PKInstallRequestItemPackageIdentifiers
_PKInstallScriptTimeEstimate
_PKInstallServiceAgentConnectionName
_PKInstallServiceClientInterface
_PKInstallServiceDaemonConnectionName
_PKInstallServiceInterface
_PKInstallServiceSystemDaemonConnectionName
_PKInstallStatusCurrentPackageSpecifier
_PKInstallStatusEstimatedTimeRemaining
_PKInstallStatusInstallState
_PKInstallStatusIsDone
_PKInstallStatusProgressValue
_PKLogTracedMessage
_PKMessageDomainKey
_PKMessageIdentifierKey
_PKMessageLogLevelKey
_PKMessagePrimarySignatureKey
_PKMessagePrimaryValueKey
_PKMessageResultKey
_PKMessageSecondarySignatureKey
_PKMessageSecondaryValueKey
_PKMessageTernarySignatureKey
_PKMessageTernaryValueKey
_PKMessageVersionKey
_PKNetEnabledProductInfoFilename
_PKPackageCheckFileAttributeKey
_PKPackageIdentifierKey
_PKPackageInfoAllowCustomInstallLocation
_PKPackageInfoAuthLevel
_PKPackageInfoContentType
_PKPackageInfoDefaultPrefixPath
_PKPackageInfoDeleteObsoleteLanguages
_PKPackageInfoExternalPayloadPath
_PKPackageInfoGeneratorVersion
_PKPackageInfoIdentifier
_PKPackageInfoMinimumSystemVersion
_PKPackageInfoOverwritePermissions
_PKPackageInfoPackageGroups
_PKPackageInfoPayloadFileCount
_PKPackageInfoPayloadInstallSize
_PKPackageInfoPostinstallScriptPath
_PKPackageInfoPreinstallScriptPath
_PKPackageInfoPreserveACLs
_PKPackageInfoPreserveExtAttrs
_PKPackageInfoRestartAction
_PKPackageInfoRootRestriction
_PKPackageInfoRootRestrictionManifestPath
_PKPackageInfoScriptsInvalidateReceipt
_PKPackageInfoShouldVerifyArchiveExplicitly
_PKPackageInfoUpdatePackage
_PKPackageInfoUpdatePayloadSize
_PKPackageInfoUseAppleFSCompression
_PKPackageInfoVersion
_PKPackageLeopardType
_PKPayloadCopierBOMCopierCopyFileFinishedHandler
_PKPayloadCopierBOMCopierCopyFileStartedHandler
_PKPayloadCopierBOMCopierCopyFileUpdateHandler
_PKPayloadCopierBOMCopierFatalErrorHandler
_PKPayloadCopierBOMCopierFatalFileErrorHandler
_PKPayloadCopierBOMCopierFileConflictErrorHandler
_PKPayloadCopierBOMCopierFileErrorHandler
_PKProductArchiveType
_PKProductErrorDomain
_PKProductNetEnabledType
_PKProductSecureNetEnabledType
_PKReceiptDefaultReceiptsPath
_PKReceiptInstallDate
_PKReceiptInstallPrefixPath
_PKReceiptInstallProcessName
_PKReceiptPackageFileName
_PKReceiptPackageGroups
_PKReceiptPackageIdentifier
_PKReceiptPackageVersion
_PKReceiptPathACLStrings
_PKReceiptPathExtendedAttributes
_PKReceiptPathSHA1Checksums
_PKSecureNetEnabledProductInfoFilename
_PKSignedContainerErrorDomain
_PKSigningIdentityErrorDomain
_PKTrustLevelToNSString
_PKURLErrorResponseHeadersKey
_PKURLErrorStatusCodeKey
_PackageKitVersionNumber
_PackageKitVersionString
_Shove
__ShoveOne
__blockCompressionReadHandler
__blockCompressionWriteHandler
__chunkNumberForChunkSizeAndResumptionOffset
__parallelThreadCount
_apple_root_ca
_gReceiptsCache
_kPKInstallClientDaemonTimeout
_kPKInstallClientMissedNotificationThreshold
_kPKInstallClientProgressInterval
_kPKInstallMaxProgressBeforeRegistration
_kPKStreamingProductActualChunkHashKey
_kPKStreamingProductErrorDomain
_kPKStreamingProductExpectedChunkHashKey
_lz4_decode
_lz4_decode_fast
_lz4_decode_safe
_lz4_encode
_lzvn_decode
_lzvn_encode
_lzvn_encode_partial
_lzvn_encode_work_size
_AuthorizationCopyRights
_AuthorizationCreate
_AuthorizationCreateFromExternalForm
_AuthorizationFree
_AuthorizationFreeItemSet
_AuthorizationMakeExternalForm
_BOMBomApproximateBytesRepresented64
_BOMBomCommit
_BOMBomEnumeratorFree
_BOMBomEnumeratorNew
_BOMBomEnumeratorNext
_BOMBomEnumeratorSkip
_BOMBomFSObjectCount
_BOMBomFSObjectExistsAtPath
_BOMBomFree
_BOMBomGetFSObjectAtPath
_BOMBomGetRootFSObject
_BOMBomInsertFSObject
_BOMBomMaskWithPatternList
_BOMBomNew
_BOMBomNewFromDirectory
_BOMBomOpen
_BOMBomOpenWithStorage
_BOMCPIOFree
_BOMCPIONew
_BOMCPIOReadHeader
_BOMCopierCancelCopy
_BOMCopierCopyWithOptions
_BOMCopierFree
_BOMCopierNewWithSys
_BOMCopierSetCopyFileFinishedHandler
_BOMCopierSetCopyFileStartedHandler
_BOMCopierSetCopyFileUpdateHandler
_BOMCopierSetFatalErrorHandler
_BOMCopierSetFatalFileErrorHandler
_BOMCopierSetFileConflictErrorHandler
_BOMCopierSetFileErrorHandler
_BOMCopierSetUserData
_BOMCopierUserData
_BOMFSObjectFree
_BOMFSObjectGroupID
_BOMFSObjectMode
_BOMFSObjectNew
_BOMFSObjectNewFromPath
_BOMFSObjectPathName
_BOMFSObjectSetGroupID
_BOMFSObjectSetMode
_BOMFSObjectSetPathName
_BOMFSObjectSetShortName
_BOMFSObjectSetUserID
_BOMFSObjectSize
_BOMFSObjectSymlinkTarget
_BOMFSObjectType
_BOMFSObjectUserID
_BOMFileClose
_BOMFileOpen
_BOMPatternListFromStringList
_BOMStorageOpenInRAM
_B_ALLDATA
_BomSys_free
_BomSys_init
_BomSys_set_open
_CC_MD5
_CC_MD5_Final
_CC_MD5_Init
_CC_MD5_Update
_CC_SHA1
_CC_SHA1_Final
_CC_SHA1_Init
_CC_SHA1_Update
_CFArrayAppendValue
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetTypeID
_CFBooleanGetTypeID
_CFBooleanGetValue
_CFBundleCopyExecutableArchitecturesForURL
_CFBundleCopyInfoDictionaryForURL
_CFBundleCreate
_CFBundleGetInfoDictionary
_CFEqual
_CFGetTypeID
_CFMakeCollectable
_CFNumberGetTypeID
_CFPreferencesAppValueIsForced
_CFPreferencesCopyValue
_CFPreferencesGetAppBooleanValue
_CFRelease
_CFRetain
_CFStringConvertEncodingToNSStringEncoding
_CFStringConvertIANACharSetNameToEncoding
_CFUUIDCreate
_CFUUIDCreateString
_CMSDecoderCopyAllCerts
_CMSDecoderCopySignerCert
_CMSDecoderCopySignerStatus
_CMSDecoderCreate
_CMSDecoderFinalizeMessage
_CMSDecoderGetNumSigners
_CMSDecoderSetDetachedContent
_CMSDecoderUpdateMessage
_CMSEncoderAddSigners
_CMSEncoderCopyEncodedContent
_CMSEncoderCreate
_CMSEncoderGetCmsMessage
_CMSEncoderSetCertificateChainMode
_CMSEncoderSetHasDetachedContent
_CMSEncoderUpdateContent
_CRCopySanitizedPath
_CSSMOID_APPLE_TP_SW_UPDATE_SIGNING
_CSSMOID_APPLE_X509_BASIC
_CSSMOID_BasicConstraints
_CSSMOID_ExtendedKeyUsage
_CSSMOID_X509V3CertificateExtensionCStruct
_CSSM_CSP_CreateSignatureContext
_CSSM_DeleteContext
_CSSM_SignData
_CSSM_VerifyData
_CompressFile
_CreateCompressionQueue
_FinishCompressionAndCleanUp
_IOPMAssertionCreateWithDescription
_IOPMAssertionRelease
_LSCopyItemInfoForURL
_LSFindApplicationForInfo
_LSRegisterURL
_NSCocoaErrorDomain
_NSDefaultRunLoopMode
_NSFileCreationDate
_NSFileGroupOwnerAccountID
_NSFileGroupOwnerAccountName
_NSFileHandleNotificationDataItem
_NSFileHandleReadCompletionNotification
_NSFileImmutable
_NSFileModificationDate
_NSFileOwnerAccountID
_NSFileOwnerAccountName
_NSFilePathErrorKey
_NSFilePosixPermissions
_NSFileSize
_NSFileSystemFreeSize
_NSFileSystemNumber
_NSFileType
_NSFileTypeBlockSpecial
_NSFileTypeCharacterSpecial
_NSFileTypeDirectory
_NSFileTypeRegular
_NSFileTypeSocket
_NSFileTypeSymbolicLink
_NSFileTypeUnknown
_NSLocalizedDescriptionKey
_NSLocalizedFailureReasonErrorKey
_NSLocalizedFileSizeDescription
_NSLocalizedRecoveryOptionsErrorKey
_NSLog
_NSOSStatusErrorDomain
_NSPOSIXErrorDomain
_NSRecoveryAttempterErrorKey
_NSRunLoopCommonModes
_NSSelectorFromString
_NSTemporaryDirectory
_NSURLAuthenticationMethodServerTrust
_NSURLErrorDomain
_NSURLErrorFailingURLErrorKey
_NSURLErrorFailingURLStringErrorKey
_NSURLErrorKey
_NSURLIsDirectoryKey
_NSURLIsRegularFileKey
_NSURLIsSymbolicLinkKey
_NSUnderlyingErrorKey
_OBJC_CLASS_$_NSArchiver
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCache
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDirectoryEnumerator
_OBJC_CLASS_$_NSError
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileHandle
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFormatter
_OBJC_CLASS_$_NSGarbageCollector
_OBJC_CLASS_$_NSHTTPURLResponse
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSInvocation
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMachPort
_OBJC_CLASS_$_NSMetadataQuery
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSNumberFormatter
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPipe
_OBJC_CLASS_$_NSPort
_OBJC_CLASS_$_NSPredicate
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRecursiveLock
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScanner
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTask
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLConnection
_OBJC_CLASS_$_NSURLDownload
_OBJC_CLASS_$_NSURLRequest
_OBJC_CLASS_$_NSUUID
_OBJC_CLASS_$_NSUnarchiver
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSValueTransformer
_OBJC_CLASS_$_NSXMLDocument
_OBJC_CLASS_$_NSXMLElement
_OBJC_CLASS_$_NSXMLNode
_OBJC_CLASS_$_NSXPCCoder
_OBJC_CLASS_$_NSXPCConnection
_OBJC_CLASS_$_NSXPCInterface
_OBJC_CLASS_$_NSXPCListener
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSDirectoryEnumerator
_OBJC_METACLASS_$_NSError
_OBJC_METACLASS_$_NSFormatter
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSValueTransformer
_SecAssessmentCopyResult
_SecAssessmentCreate
_SecCertificateCopyCommonName
_SecCertificateCopyData
_SecCertificateCopyFieldValues
_SecCertificateCopyFirstFieldValue
_SecCertificateCopyPublicKey
_SecCertificateCopyShortDescription
_SecCertificateCreateFromData
_SecCertificateGetData
_SecCertificateGetTypeID
_SecCertificateReleaseFieldValues
_SecCertificateReleaseFirstFieldValue
_SecCmsMessageSetTSAContext
_SecCmsTSAGetDefaultContext
_SecCodeCopySigningInformation
_SecCopyErrorMessageString
_SecIdentityCopyCertificate
_SecIdentityCopyPrivateKey
_SecItemCopyMatching
_SecKeyGetCSPHandle
_SecKeyGetCSSMKey
_SecKeyGetCredentials
_SecKeychainCopyDomainSearchList
_SecKeychainGetPath
_SecKeychainItemCopyKeychain
_SecKeychainOpen
_SecPolicyCreateBasicX509
_SecPolicyCreateWithOID
_SecPolicyGetOID
_SecPolicySearchCopyNext
_SecPolicySearchCreate
_SecRequirementCreateWithData
_SecStaticCodeCheckValidityWithErrors
_SecStaticCodeCreateWithPath
_SecTrustCreateWithCertificates
_SecTrustEvaluate
_SecTrustGetCssmResultCode
_SecTrustGetResult
_SecTrustSetAnchorCertificates
_SecTrustSetPolicies
_SecTrustSetVerifyDate
_SecTrustSettingsCopyTrustSettings
_UTTypeCopyPreferredTagWithClass
_UTTypeCreatePreferredIdentifierForTag
__Block_copy
__Block_object_assign
__Block_object_dispose
__Block_release
__CFBundleCopyInfoPlistURL
__CFBundleURLLooksLikeBundle
__CFCopySystemVersionDictionary
__CSBackupSuspendAutomaticActivity
__MDPrepareForSoftwareUpdate
__MDSoftwareUpdateComplete
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___assert_rtn
___bzero
___error
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
___stderrp
__dispatch_main_q
__dispatch_queue_attr_concurrent
__dispatch_source_type_timer
__kCFBundleDisplayNameKey
__kCFBundleShortVersionStringKey
__kCFSystemVersionProductVersionKey
__objc_empty_cache
__qtn_error
__qtn_file_alloc
__qtn_file_apply_to_path
__qtn_file_free
__qtn_file_get_flags
__qtn_file_init_with_path
__qtn_file_set_flags
__vproc_transaction_count
_access
_acl_free
_acl_get_entry
_acl_get_link_np
_acl_to_text
_asl_free
_asl_log
_asl_new
_asl_set
_asl_unset
_audit_session_join
_audit_session_self
_bootstrap_port
_calloc
_chflags
_close
_closedir
_confstr
_copyfile
_deflate
_deflateEnd
_deflateInit_
_dispatch_async
_dispatch_barrier_async
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_release
_dispatch_resume
_dispatch_retain
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_dispatch_set_target_queue
_dispatch_source_cancel
_dispatch_source_create
_dispatch_source_set_event_handler
_dispatch_source_set_timer
_dispatch_source_testcancel
_dispatch_sync
_dispatch_time
_fcntl
_fprintf
_free
_fts_close$INODE64
_fts_open$INODE64
_fts_read$INODE64
_fwrite
_getenv
_geteuid
_getgid
_getpid
_gettimeofday
_getuid
_getxattr
_gzclose
_gzopen
_gzread
_host_page_size
_host_statistics
_inflate
_inflateEnd
_inflateInit_
_kAFSCCompressionTypes
_kAFSCDispatchQueuePriority
_kCFAllocatorDefault
_kCFBundleIdentifierKey
_kCFBundleNameKey
_kCFBundleVersionKey
_kCFPreferencesAnyHost
_kCFPreferencesCurrentUser
_kMDItemPath
_kSecAssessmentAssessmentVerdict
_kSecAssessmentContextKeyOperation
_kSecAssessmentOperationTypeInstall
_kSecAttrCanSign
_kSecClass
_kSecClassCertificate
_kSecClassIdentity
_kSecCodeInfoCertificates
_kSecCodeInfoIdentifier
_kSecMatchLimit
_kSecMatchLimitAll
_kSecMatchPolicy
_kSecMatchSearchList
_kSecMatchSubjectStartsWith
_kSecMatchSubjectWholeString
_kSecPolicyAppleCodeSigning
_kSecReturnRef
_kUTTagClassMIMEType
_listxattr
_lseek
_lzma_easy_buffer_encode
_lzma_stream_buffer_decode
_mach_error_string
_mach_host_self
_mach_port_deallocate
_mach_port_mod_refs
_mach_task_self_
_malloc
_memcmp
_memcpy
_memset
_mkdtemp
_mktemp
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_open
_opendir$INODE64
_pread
_proc_pidinfo
_proc_pidpath
_pthread_attr_destroy
_pthread_attr_init
_pthread_attr_set_qos_class_np
_pthread_cond_broadcast
_pthread_cond_destroy
_pthread_cond_init
_pthread_cond_wait
_pthread_create
_pthread_get_qos_class_np
_pthread_join
_pthread_mutex_destroy
_pthread_mutex_init
_pthread_mutex_lock
_pthread_mutex_unlock
_pthread_self
_qos_class_self
_read
_readdir_r$INODE64
_readlink
_realpath$DARWIN_EXTSN
_rename
_rmdir
_rootless_apply
_rootless_mkdir_restricted
_setxattr
_stat$INODE64
_statfs$INODE64
_strcmp
_strdup
_strerror
_strlen
_strptime
_strtoul
_strtoull
_sysctlbyname
_syslog
_task_get_special_port
_task_set_special_port
_timegm
_unlink
_utimes
_write
_xar_add_folder
_xar_add_from_archive
_xar_add_frombuffer
_xar_add_frompath
_xar_close
_xar_extract_tobuffer
_xar_extract_tofile
_xar_file_first
_xar_file_next
_xar_get_heap_offset
_xar_get_path
_xar_get_type
_xar_iter_free
_xar_iter_new
_xar_open
_xar_opt_set
_xar_prop_first
_xar_prop_get
_xar_prop_next
_xar_signature_add_x509certificate
_xar_signature_copy_signed_data
_xar_signature_first
_xar_signature_get_x509certificate_count
_xar_signature_get_x509certificate_data
_xar_signature_new
_xar_signature_new_extended
_xar_signature_next
_xar_signature_type
_xar_verify
_xpc_mach_send_copy_right
_xpc_mach_send_create
_xpc_release
dyld_stub_binder

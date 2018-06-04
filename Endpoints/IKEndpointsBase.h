//
//    Copyright (c) 2018 Shyam Bhat
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy of
//    this software and associated documentation files (the "Software"), to deal in
//    the Software without restriction, including without limitation the rights to
//    use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//    the Software, and to permit persons to whom the Software is furnished to do so,
//    subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//    FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//    COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//    IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "IKPaginationInfo.h"
#import "IKConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface IKEndpointsBase : NSObject


/**
 *  Client Id of your App, as registered with Instagram.
 */
@property (nonatomic, readonly, nonnull) NSString *appClientID;


/**
 *  Redirect URL of your App, as registered with Instagram.
 */
@property (nonatomic, readonly, nonnull) NSString *appRedirectURL;


#pragma mark - Base Requests

- (void)getPath:(NSString *)path
  responseModel:(Class)modelClass
        success:(InstagramObjectBlock)success
        failure:(nullable InstagramFailureBlock)failure;


- (void)getPaginatedPath:(NSString *)path
              parameters:(nullable NSDictionary *)parameters
           responseModel:(Class)modelClass
                 success:(InstagramPaginatiedResponseBlock)success
                 failure:(nullable InstagramFailureBlock)failure;


- (void)postPath:(NSString *)path
      parameters:(nullable NSDictionary *)parameters
         success:(InstagramResponseBlock)success
         failure:(nullable InstagramFailureBlock)failure;


- (void)deletePath:(NSString *)path
           success:(InstagramResponseBlock)success
           failure:(nullable InstagramFailureBlock)failure;


- (NSDictionary *)parametersFromCount:(NSInteger)count maxId:(NSString *)maxId andPaginationKey:(NSString *)key;


#pragma mark - Pagination -


/**
 *  Get paginated objects as specified by information contained in the PaginationInfo object.
 *
 *  @param paginationInfo The PaginationInfo Object obtained from the previous endpoint success block.
 *  @param success        Provides an array of paginated Objects.
 *  @param failure        Provides an error and a server status code.
 */
- (void)getPaginatedItemsForInfo:(IKPaginationInfo *)paginationInfo
                     withSuccess:(InstagramPaginatiedResponseBlock)success
                         failure:(nullable InstagramFailureBlock)failure;


@end

NS_ASSUME_NONNULL_END

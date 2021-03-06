// Copyright 2014 afuzzyllama. All Rights Reserved.

#pragma once

/**
 * Interface that facilities create a data resource.
 */
template<class T>
class IDataResource
{
public:
    virtual ~IDataResource(){}
    
    /**
     * Acquire the data resource
     */
    virtual bool Acquire() = 0;
    
    /**
     * Release the data resource
     */
    virtual bool Release() = 0;
    
    /**
     * Get the resource
     */
    virtual T* Get() const = 0;
};
/*
const response = await fetch(url, settings);
const responseBody = await response.json();
*/

async function createUser(apiKey, url, data) {
    const response = await fetch(url, {
        method: "POST",
        mode: "cors",
        headers: {
            "Content-Type": "application/json",
            "X-API-Key": apiKey
        },
        body: JSON.stringify(data)
    });

    return response.json();
}

async function updateUser(baseURL, id, data) {
    const fullURL = `${baseURL}/${id}`;

    const response = await fetch(fullURL, {
        method: "PUT",
        mode: "cors",
        headers: {
            "X-API-Key": apiKey,
            "Content-Type": "application/json"
        },
        body: JSON.stringify(data)
    });

    return response.json();
}

async function getUserById(baseURL, id, apiKey) {
    const fullURL = `${baseURL}/${id}`;

    const response = await fetch(fullURL, {
        method: "GET",
        mode: "cors",
        headers: {
            "X-API-KEY": apiKey
        }
    });

    return response.json();
}

async function deleteUser(baseURL, id, apiKey) {
    const fullURL = `${baseURL}/${id}`;

    const response = await fetch(fullURL, {
        method: "DELETE",
        mode: "cors",
        headers: {
            "X-API-KEY": apiKey
        }
    });

    return response.json();
}